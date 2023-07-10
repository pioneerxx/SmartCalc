#!/bin/bash

make s21_smartcalc.a
gcc -g Tests/s21_smartcalc_tests.c s21_smartcalc.a -o test -lcheck -lcheck -lpthread -lm -D_GNU_SOURCE -lrt -lsubunit
valgrind --trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all ./test

