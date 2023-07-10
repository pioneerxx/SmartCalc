#include "s21_smartcalc.h"

void pushNumber(Numbers **head, double number, int *flag) {
  Numbers *tmp = (Numbers *)malloc(sizeof(Numbers));
  if (tmp == NULL) {
    *flag = 1;
  } else {
    tmp->prev = *head;
    tmp->number = number;
    (*head) = tmp;
  }
}

double popNumber(Numbers **head) {
  Numbers *tmp = NULL;
  double val = 0;
  if (head == NULL) {
    val = -1;
  } else {
    tmp = (*head);
    val = tmp->number;
    (*head) = (*head)->prev;
    free(tmp);
  }
  return val;
}

void pushLexemme(Operators **head, int lex, int prior, int *flag) {
  Operators *tmp = (Operators *)malloc(sizeof(Operators));
  if (tmp == NULL) {
    *flag = 1;
  } else {
    tmp->prev = *head;
    tmp->lexemme = lex;
    tmp->priority = prior;
    (*head) = tmp;
  }
}

int popLexemme(Operators **head) {
  Operators *tmp = NULL;
  int val = 0;
  if (head == NULL) {
    val = -1;
  } else {
    tmp = (*head);
    val = tmp->lexemme;
    (*head) = (*head)->prev;
    free(tmp);
  }
  return val;
}

int peekPriority(Operators **head) {
  int res = 0;
  if (*head != NULL) {
    res = (*head)->priority;
  }
  return res;
}

int peekLexemme(Operators **head) {
  int res = 0;
  if (*head != NULL) {
    res = (*head)->lexemme;
  }
  return res;
}

double smartCalc(char *query, int *flag) {
  double res = 0, tmp = 0;
  int ind = 0, lex = 0, priority = 0;
  Numbers *numbs = NULL;
  Operators *ops = NULL;
  while (query[ind] != '\0' && !*flag) {
    if (query[ind] >= 48 && query[ind] <= 57) {
      tmp = QueryToNum(query, &ind);
      pushNumber(&numbs, tmp, flag);
    } else {
      lex = QueryToLex(query, &ind, &priority);
      if (lex == lbraceclose) {
        while (peekLexemme(&ops) != lbraceop && !*flag) {
          execute(&numbs, &ops, flag);
        }
        popLexemme(&ops);
      } else if (lex == lbraceop) {
        pushLexemme(&ops, lex, priority, flag);
      } else {
        while (peekPriority(&ops) >= priority &&
               peekPriority(&ops) != PRIORITY_A && !*flag) {
          execute(&numbs, &ops, flag);
        }
        pushLexemme(&ops, lex, priority, flag);
      }
    }
  }
  while (ops && !*flag) {
    execute(&numbs, &ops, flag);
  }
  if (numbs && !*flag) {
    res = popNumber(&numbs);
  }
  return res;
}

double QueryToNum(char *query, int *ind) {
  char num[256];
  int numind = 0;
  double res = 0;
  while ((query[*ind] >= 48 && query[*ind] <= 57) || query[*ind] == '.') {
    num[numind] = query[*ind];
    *ind = *ind + 1;
    numind++;
  }
  num[numind] = '\0';
  res = atof(num);
  return res;
}

int QueryToLex(char *query, int *ind, int *prior) {
  int res = 0;
  if (query[*ind] == '(') {
    res = lbraceop;
    *prior = PRIORITY_A;
    *ind = *ind + 1;
  } else if (query[*ind] == ')') {
    res = lbraceclose;
    *prior = PRIORITY_A;
    *ind = *ind + 1;
  } else if (query[*ind] == '+') {
    if (*ind == 0 || query[*ind - 1] == '(') {
      res = lunplus;
    } else {
      res = lplus;
    }
    *prior = PRIORITY_F;
    *ind = *ind + 1;
  } else if (query[*ind] == '-') {
    if (*ind == 0 || query[*ind - 1] == '(') {
      res = lunminus;
    } else {
      res = lminus;
    }
    *prior = PRIORITY_F;
    *ind = *ind + 1;
  } else if (query[*ind] == '*') {
    res = lmult;
    *prior = PRIORITY_D;
    *ind = *ind + 1;
  } else if (query[*ind] == '/') {
    res = ldivide;
    *prior = PRIORITY_D;
    *ind = *ind + 1;
  } else if (query[*ind] == '^') {
    res = lpow;
    *prior = PRIORITY_C;
    *ind = *ind + 1;
  } else if (query[*ind] == 'm') {
    res = lmod;
    *prior = PRIORITY_D;
    *ind = *ind + 3;
  } else if (query[*ind] == 'c') {
    res = lcos;
    *prior = PRIORITY_B;
    *ind = *ind + 3;
  } else if (query[*ind] == 't') {
    res = ltan;
    *prior = PRIORITY_B;
    *ind = *ind + 3;
  } else if (query[*ind] == 'l') {
    if (query[*ind + 1] == 'o') {
      res = llog;
      *prior = PRIORITY_B;
      *ind = *ind + 3;
    } else if (query[*ind + 1] == 'n') {
      res = lln;
      *prior = PRIORITY_B;
      *ind = *ind + 2;
    }
  } else if (query[*ind] == 'a') {
    if (query[*ind + 1] == 'c') {
      res = lacos;
      *prior = PRIORITY_B;
    } else if (query[*ind + 1] == 's') {
      res = lasin;
      *prior = PRIORITY_B;
    } else if (query[*ind + 1] == 't') {
      res = latg;
      *prior = PRIORITY_B;
    }
    *ind = *ind + 4;
  } else if (query[*ind] == 's') {
    if (query[*ind + 1] == 'i') {
      res = lsin;
      *prior = PRIORITY_B;
      *ind = *ind + 3;
    } else if (query[*ind == 'q']) {
      res = lsqrt;
      *prior = PRIORITY_B;
      *ind = *ind + 4;
    }
  }
  return res;
}

void execute(Numbers **numbs, Operators **ops, int *flag) {
  double val1 = popNumber(numbs);
  double val2 = 0;
  double res = 0;
  if (peekLexemme(ops) < 7) {
    val2 = popNumber(numbs);
  }
  int lex = popLexemme(ops);
  if (lex == lplus) {
    res = val2 + val1;
  } else if (lex == lminus) {
    res = val2 - val1;
  } else if (lex == lmult) {
    res = val2 * val1;
  } else if (lex == ldivide) {
    res = val2 / val1;
  } else if (lex == lpow) {
    res = pow(val2, val1);
  } else if (lex == lmod) {
    res = fmod(val2, val1);
  } else if (lex == lcos) {
    res = cos(val1);
  } else if (lex == lsin) {
    res = sin(val1);
  } else if (lex == ltan) {
    res = tan(val1);
  } else if (lex == lasin) {
    res = asin(val1);
  } else if (lex == lacos) {
    res = acos(val1);
  } else if (lex == latg) {
    res = atan(val1);
  } else if (lex == lsqrt) {
    res = sqrt(val1);
  } else if (lex == lln) {
    res = log(val1);
  } else if (lex == llog) {
    res = log10(val1);
  } else if (lex == lunminus) {
    res = -val1;
  } else if (lex == lunplus) {
    res = val1;
  }
  pushNumber(numbs, res, flag);
}

double creditCalc(double sum, int span, double percent, int type,
                  double *diffsum, double *firstpayment) {
  double month_payment = 0;
  double percent_monthly = 0;
  *diffsum = 0;
  double b, n, sn, p;
  b = n = sn = p = 0;
  if (type == annuitent) {
    percent_monthly = percent / 100 / 12;
    month_payment =
        sum * (percent_monthly / (1 - pow((1 + percent_monthly), -span)));
  } else if (type == differential) {
    b = sum / span;
    for (int i = 0; i < span; i++) {
      sn = sum - (b * i);
      p = sn * percent / 100 / 12;
      month_payment = b + p;
      if (i == 0) {
        *firstpayment = month_payment;
      }
      *diffsum += month_payment;
    }
  }
  return month_payment;
}
