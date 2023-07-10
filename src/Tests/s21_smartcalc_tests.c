#include <check.h>

#include "../Project/s21_smartcalc.h"

//----------------------------------------------------------------------------------------------//

START_TEST(addition_1) {
  int flag = 0;
  char start_string[256] = {
      "(1+(1*(4*(5^4+(3*2*1.1/(3*sin(2*cos(1235.3)*2)))))))"};
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 2769.16, 7);
}
END_TEST

START_TEST(addition_2) {
  char start_string[256] = {"21*cos123-100"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ;
  ck_assert_double_eq_tol(result, -118.64, 7);
}
END_TEST

START_TEST(addition_3) {
  char start_string[256] = {"0+0"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 0.0, 7);
}
END_TEST

START_TEST(addition_4) {
  char start_string[256] = {"0+0"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 0.0, 7);
}
END_TEST

START_TEST(addition_5) {
  char start_string[256] = {"-100*(-5)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 500.0, 7);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(subtraction_1) {
  char start_string[256] = {"10-5"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 5.0, 7);
}
END_TEST

START_TEST(subtraction_2) {
  char start_string[256] = {"0-1000"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, -1000.0, 7);
}
END_TEST

START_TEST(subtraction_3) {
  char start_string[256] = {"32-32"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 0.0, 7);
}
END_TEST

START_TEST(subtraction_4) {
  char start_string[256] = {"999-99-500-25-75-200-93-7-499"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, -499.0, 7);
}
END_TEST

START_TEST(subtraction_5) {
  char start_string[256] = {"999-99-500+25-75-200+93-7-499"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, -263.0, 7);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(multiplication_1) {
  char start_string[256] = {"10*5"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 50.0, 7);
}
END_TEST

START_TEST(multiplication_2) {
  char start_string[256] = {"-0*1000"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 0.0, 7);
}
END_TEST

START_TEST(multiplication_3) {
  char start_string[256] = {"32*2"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 64.0, 7);
}
END_TEST

START_TEST(multiplication_4) {
  char start_string[256] = {"2*2*2*8"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 64.0, 7);
}
END_TEST

START_TEST(multiplication_5) {
  char start_string[256] = {"-7*6"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, -42.0, 7);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(division_1) {
  char start_string[256] = {"10/2"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 5.0, 7);
}
END_TEST

START_TEST(division_2) {
  char start_string[256] = {"0/4567"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 0.0, 7);
}
END_TEST

START_TEST(division_3) {
  char start_string[256] = {"31/2"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 15.5, 7);
}
END_TEST

START_TEST(division_4) {
  char start_string[256] = {"100/2/2/5/5"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 1.0, 7);
}
END_TEST

START_TEST(division_5) {
  char start_string[256] = {"-999/9"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, -111.0, 7);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(power_1) {
  char start_string[256] = {"10^2"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 100.0, 7);
}
END_TEST

START_TEST(power_2) {
  char start_string[256] = {"1^43"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 1.0, 7);
}
END_TEST

START_TEST(power_3) {
  char start_string[256] = {"3^2"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 9.0, 7);
}
END_TEST

START_TEST(power_4) {
  char start_string[256] = {"0^0"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 0.0, 7);
}
END_TEST

START_TEST(power_5) {
  char start_string[256] = {"-1^3"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, -1.0, 7);
}
END_TEST

//----------------------------------------------------------------------------------------------//

START_TEST(cosine_1) {
  char start_string[256] = {"cos0-100"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, cos(0) - 100, 7);
}
END_TEST

START_TEST(cosine_2) {
  char start_string[256] = {"cos(1)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, cos(1), 7);
}
END_TEST

START_TEST(cosine_3) {
  char start_string[256] = {"cos(-5)"};  // добавить проверку унарного минуса
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, cos(-5), 7);
}
END_TEST

START_TEST(cosine_4) {
  char start_string[256] = {"cos(5)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, cos(5), 7);
}
END_TEST

START_TEST(sine_1) {
  char start_string[256] = {"sin(6)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, sin(6), 7);
}
END_TEST

START_TEST(sqrt_1) {
  char start_string[256] = {"sqrt(9)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, sqrt(9), 7);
}
END_TEST

START_TEST(log_1) {
  char start_string[256] = {"log(10)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, log10(10), 7);
}
END_TEST

START_TEST(ln_1) {
  char start_string[256] = {"ln(9)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, log(9), 7);
}
END_TEST

START_TEST(tan_1) {
  char start_string[256] = {"tan(9)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, tan(9), 7);
}
END_TEST

START_TEST(acos_1) {
  char start_string[256] = {"acos(0.5)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, acos(0.5), 7);
}
END_TEST

START_TEST(asin_1) {
  char start_string[256] = {"asin(0.5)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, asin(0.5), 7);
}
END_TEST

START_TEST(atan_1) {
  char start_string[256] = {"atan(0.5)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, atan(0.5), 7);
}
END_TEST

START_TEST(cosine_5) {
  char start_string[256] = {"cos0.30"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, cos(0.30), 7);
}
END_TEST

START_TEST(mix_1) {
  char start_string[256] = {"(1+2)*3+5*4"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 29.0, 7);
}
END_TEST

START_TEST(mix_2) {
  char start_string[256] = {"(((1+2)))*3"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 9.0, 7);
}
END_TEST

START_TEST(mix_3) {
  char start_string[256] = {"(((1+2)))*3"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 9.0, 7);
}
END_TEST

START_TEST(mix_4) {
  char start_string[256] = {"(((1*2)))-3"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, -1.0, 7);
}
END_TEST

START_TEST(mix_5) {
  char start_string[256] = {"1+2+3*(0-1)+(-1)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, -1.0, 7);
}
END_TEST

START_TEST(mix_6) {
  char start_string[256] = {"3+4*2/(1-5)^2"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 3.5, 7);
}
END_TEST

START_TEST(mix_7) {
  char start_string[256] = {"2+3^(2*1+1)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 27.0, 7);
}
END_TEST

START_TEST(mix_8) {
  char start_string[256] = {"3+5*2/(6-4)^2"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 5.5, 7);
}
END_TEST

START_TEST(mix_9) {
  char start_string[256] = {"3+4*2/(2+0)^(3^1)*100"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 103.0, 7);
}
END_TEST

START_TEST(mix_10) {
  char start_string[256] = {"11+(7^2)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 60.0, 7);
}
END_TEST

START_TEST(mix_11) {
  char start_string[256] = {"11+7^2"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 60.0, 7);
}
END_TEST

START_TEST(mix_12) {
  char start_string[256] = {"(0.432*54.2/4^2-(-8*4))*0.02"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 0.669268, 7);
}
END_TEST

START_TEST(empty) {
  char start_string[256] = {""};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_int_eq((int)result, 0);
}
END_TEST

// -----------------------------------------------
START_TEST(mix_13) {
  char start_string[256] = {"11-(123124.0001+(42-32.327)-32)*423/432"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, -120526.054910, 7);
}
END_TEST
START_TEST(mix_14) {
  char start_string[256] = {"32mod(32-30)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 0.0, 7);
}
END_TEST
START_TEST(mix_15) {
  char start_string[256] = {"12-32*(2143-312*(4-5)-1.32/(83.2/3))"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, -78546.476923, 7);
}
END_TEST

START_TEST(mix_16) {
  char start_string[256] = {"2^(3^2)-100"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 412.0, 7);
}
END_TEST

START_TEST(mix_17) {
  char start_string[256] = {"2^(3^2)+10"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 522.0, 7);
}
END_TEST

START_TEST(mix_18) {
  char start_string[256] = {"2+3^(2*1+1)"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 29.0, 7);
}
END_TEST

START_TEST(mix_19) {
  char start_string[256] = {"512/(2)^(3^2)*100+3"};
  int flag = 0;
  double result = smartCalc(start_string, &flag);
  ck_assert_double_eq_tol(result, 103.0, 7);
}
END_TEST
//----------------------------------------------------------------------------------------------//

START_TEST(credit_annuity_1) {
  double balance_owed = 10000, term = 12., percent = 7.0;
  double diffsum = 0, firstpayment = 0;
  double mounthly_payment =
      creditCalc(balance_owed, term, percent, 1, &diffsum, &firstpayment);
  double total_payment = term * mounthly_payment;
  double overpayment = total_payment - balance_owed;
  ck_assert_double_eq_tol(mounthly_payment, 865.27, 2);
  ck_assert_double_eq_tol(overpayment, 383.24, 2);
  ck_assert_double_eq_tol(total_payment, 10383.24, 2);
}
END_TEST

START_TEST(credit_annuity_2) {
  double balance_owed = 150000, term = 15., percent = 9.0;
  double diffsum = 0, firstpayment = 0;
  double mounthly_payment =
      creditCalc(balance_owed, term, percent, 1, &diffsum, &firstpayment);
  double total_payment = term * mounthly_payment;
  double overpayment = total_payment - balance_owed;
  ck_assert_double_eq_tol(mounthly_payment, 10610.46, 2);
  ck_assert_double_eq_tol(overpayment, 9156.90, 2);
  ck_assert_double_eq_tol(total_payment, 159156.9, 2);
}
END_TEST

START_TEST(credit_annuity_3) {
  double balance_owed = 1500000, term = 18, percent = 6.0;
  double diffsum = 0, firstpayment = 0;
  double mounthly_payment =
      creditCalc(balance_owed, term, percent, 1, &diffsum, &firstpayment);
  double total_payment = term * mounthly_payment;
  double overpayment = total_payment - balance_owed;
  ck_assert_double_eq_tol(mounthly_payment, 87347.6, 2);
  ck_assert_double_eq_tol(overpayment, 72256.8, 2);
  ck_assert_double_eq_tol(total_payment, 1572256.8, 2);
}
END_TEST

START_TEST(credit_diff_1) {
  double balance_owed = 10000, term = 12, percent = 7.0;
  double diffsum = 0, firstpayment = 0;
  double last_payment =
      creditCalc(balance_owed, term, percent, 2, &diffsum, &firstpayment);
  double total_payment = diffsum;
  double overpayment = total_payment - balance_owed;
  ck_assert_double_eq_tol(firstpayment, 891.67, 2);
  ck_assert_double_eq_tol(last_payment, 838.19, 2);
  ck_assert_double_eq_tol(overpayment, 379.17, 2);
  ck_assert_double_eq_tol(total_payment, 10379.17, 2);
}
END_TEST

START_TEST(credit_diff_2) {
  double balance_owed = 150000, term = 15.0, percent = 9.0;
  double diffsum = 0, firstpayment = 0;
  double last_payment =
      creditCalc(balance_owed, term, percent, 2, &diffsum, &firstpayment);
  double total_payment = diffsum;
  double overpayment = total_payment - balance_owed;
  ck_assert_double_eq_tol(firstpayment, 11125.0, 2);
  ck_assert_double_eq_tol(last_payment, 10075.0, 2);
  ck_assert_double_eq_tol(overpayment, 9000.0, 2);
  ck_assert_double_eq_tol(total_payment, 159000.0, 2);
}
END_TEST

START_TEST(credit_diff_3) {
  double balance_owed = 1500000, term = 18, percent = 6.0;
  double diffsum = 0, firstpayment = 0;
  double last_payment =
      creditCalc(balance_owed, term, percent, 2, &diffsum, &firstpayment);
  double total_payment = diffsum;
  double overpayment = total_payment - balance_owed;
  ck_assert_double_eq_tol(firstpayment, 90833.33, 2);
  ck_assert_double_eq_tol(last_payment, 83750.00, 2);
  ck_assert_double_eq_tol(overpayment, 71250.0, 2);
  ck_assert_double_eq_tol(total_payment, 1571250.0, 2);
}
END_TEST

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int tc = 0;
  suite_add_tcase(s1, tc1_1);

  tcase_add_test(tc1_1, addition_1);
  tcase_add_test(tc1_1, addition_2);
  tcase_add_test(tc1_1, addition_3);
  tcase_add_test(tc1_1, addition_4);
  tcase_add_test(tc1_1, addition_5);

  tcase_add_test(tc1_1, subtraction_1);
  tcase_add_test(tc1_1, subtraction_2);
  tcase_add_test(tc1_1, subtraction_3);
  tcase_add_test(tc1_1, subtraction_4);
  tcase_add_test(tc1_1, subtraction_5);

  tcase_add_test(tc1_1, multiplication_1);
  tcase_add_test(tc1_1, multiplication_2);
  tcase_add_test(tc1_1, multiplication_3);
  tcase_add_test(tc1_1, multiplication_4);
  tcase_add_test(tc1_1, multiplication_5);

  tcase_add_test(tc1_1, division_1);
  tcase_add_test(tc1_1, division_2);
  tcase_add_test(tc1_1, division_3);
  tcase_add_test(tc1_1, division_4);
  tcase_add_test(tc1_1, division_5);

  tcase_add_test(tc1_1, power_1);
  tcase_add_test(tc1_1, power_2);
  tcase_add_test(tc1_1, power_3);
  tcase_add_test(tc1_1, power_4);
  tcase_add_test(tc1_1, power_5);

  tcase_add_test(tc1_1, cosine_1);
  tcase_add_test(tc1_1, cosine_2);
  tcase_add_test(tc1_1, cosine_3);
  tcase_add_test(tc1_1, cosine_4);
  tcase_add_test(tc1_1, cosine_5);

  tcase_add_test(tc1_1, mix_1);
  tcase_add_test(tc1_1, mix_2);
  tcase_add_test(tc1_1, mix_3);
  tcase_add_test(tc1_1, mix_4);
  tcase_add_test(tc1_1, mix_5);
  tcase_add_test(tc1_1, mix_6);
  tcase_add_test(tc1_1, mix_7);
  tcase_add_test(tc1_1, mix_8);
  tcase_add_test(tc1_1, mix_9);
  tcase_add_test(tc1_1, mix_10);
  tcase_add_test(tc1_1, mix_11);
  tcase_add_test(tc1_1, mix_12);
  tcase_add_test(tc1_1, mix_13);
  tcase_add_test(tc1_1, mix_14);
  tcase_add_test(tc1_1, mix_15);
  tcase_add_test(tc1_1, mix_16);
  tcase_add_test(tc1_1, mix_17);
  tcase_add_test(tc1_1, mix_18);
  tcase_add_test(tc1_1, mix_19);

  tcase_add_test(tc1_1, sine_1);
  tcase_add_test(tc1_1, sqrt_1);
  tcase_add_test(tc1_1, tan_1);
  tcase_add_test(tc1_1, log_1);
  tcase_add_test(tc1_1, ln_1);
  tcase_add_test(tc1_1, acos_1);
  tcase_add_test(tc1_1, asin_1);
  tcase_add_test(tc1_1, atan_1);

  tcase_add_test(tc1_1, empty);

  tcase_add_test(tc1_1, credit_annuity_1);
  tcase_add_test(tc1_1, credit_annuity_2);
  tcase_add_test(tc1_1, credit_annuity_3);

  tcase_add_test(tc1_1, credit_diff_1);
  tcase_add_test(tc1_1, credit_diff_2);
  tcase_add_test(tc1_1, credit_diff_3);
  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_ENV);
  tc = srunner_ntests_failed(sr);
  srunner_free(sr);

  return tc == 0 ? 0 : 1;
}