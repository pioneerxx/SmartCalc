CPPFLAGS = -Wall -Werror -Wextra
CC = gcc
GFLAGS = --coverage
TFLAGS = -lcheck -lm -lpthread
ARFLAGS = rcs
OBJECTS = *.o
SOURCES = Project/s21_smartcalc.c
SOURCES_QT = SmartCalc_QT/main.cpp SmartCalc_QT/mainwindow.cpp SmartCalc_QT/mainwindow.h
SOURCES_TEST = Tests/s21_smartcalc_tests.c

all: clean s21_smartcalc.a

s21_smartcalc.a: clean
	$(CC) $(CPPFLAGS) $(SOURCES) -c
	ar $(ARFLAGS) s21_smartcalc.a $(OBJECTS)
	rm $(OBJECTS)

test: s21_smartcalc.a
	$(CC) $(FLAGS) -c $(SOURCES_TEST) -o s21_smartcalc_tests.o
	$(CC) s21_smartcalc_tests.o s21_smartcalc.a $(TFLAGS) -o test
	./test

install_lcov:
	curl -fsSL https://rawgit.com/kube/42homebrew/master/install.sh | zsh
	brew install lcov

gcov_report: s21_smartcalc.a
	gcc -Wall -Werror -Wextra --coverage $(SOURCES_TEST) Project/s21_smartcalc.h $(SOURCES) s21_smartcalc.a $(TFLAGS) -o gcov_test
	chmod +x *
	./gcov_test
	lcov -t "gcovReport" -o gcov_test.info -c -d .
	genhtml -o report gcov_test.info
	open report/index.html

leaks: s21_smartcalc.a
	$(CC) $(CPPFLAGS) $(GFLAGS) s21_smartcalc.a $(SOURCES_TEST) $(TFLAGS) -o test
	CK_FORK=no leaks --atExit -- ./test

valgrind: clean
	rm -rf ~/Library/Containers/com.docker.docker
	mkdir -p ~/goinfre/Docker/Data
	ln -s ~/goinfre/Docker ~/Library/Containers/com.docker.docker
	cd Valgrind && sh run.sh

clean:
	rm -rf s21_smartcalc.a test *.html *.gcda *.gcno gcov_test *.info report *.o *.dSYM *.css

check:
	cppcheck $(SOURCES) $(SOURCES_TEST) Project/s21_smartcalc.h
	cppcheck --language=c++ $(SOURCES_QT) --force
	clang-format -n $(SOURCES) $(SOURCES_TEST) Project/s21_smartcalc.h -style=google
	clang-format -n $(SOURCES_QT) -style=google

install:
	qmake -o Executables/Makefile SmartCalc_QT/untitled.pro
	cd Executables && make

make start:
	cd Executables/s21_smartCalc.app/Contents/MacOS && ./s21_smartCalc

uninstall:
	cd Executables && make clean
	cd Executables && rm -rf Makefile qmake_qmake_qm_files.qrc s21_smartCalc.app .qm .qmake.stash

dist:
	cd .. && tar -czf s21_SmartCalc_v1.0.tgz src

dvi:
	open manual/manual.md
