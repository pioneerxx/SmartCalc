#ifndef S21_SMARTCALC_H
#define S21_SMARTCALC_H
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
  struct Node *prev;
  double number;
} Numbers;

typedef struct Node2 {
  struct Node2 *prev;
  int lexemme;
  int priority;
} Operators;

enum CreditType { annuitent = 1, differential = 2 };

enum Priority {
  PRIORITY_F = 1,
  PRIORITY_D = 2,
  PRIORITY_C = 3,
  PRIORITY_B = 4,
  PRIORITY_A = 5

};

enum Lexemme {
  lplus = 1,
  lminus = 2,
  lmult = 3,
  ldivide = 4,
  lpow = 5,
  lmod = 6,
  lunplus = 7,
  lunminus = 8,
  lcos = 9,
  lsin = 10,
  ltan = 11,
  lasin = 12,
  lacos = 13,
  latg = 14,
  lsqrt = 15,
  lln = 16,
  llog = 17,
  lbraceop = 18,
  lbraceclose = 19
};

void pushNumber(Numbers **head, double number, int *flag);
double popNumber(Numbers **head);
void pushLexemme(Operators **head, int lex, int prior, int *flag);
int popLexemme(Operators **head);
int peekPriority(Operators **head);
int peekLexemme(Operators **head);
double smartCalc(char *query, int *flag);
double QueryToNum(char *query, int *ind);
int QueryToLex(char *query, int *ind, int *prior);
void execute(Numbers **numbs, Operators **ops, int *flag);
double creditCalc(double sum, int span, double percent, int type,
                  double *diffsum, double *firstpayment);

#endif