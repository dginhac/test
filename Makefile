# Basic Makefile (Q1)

app-main: point.o app-main.o
	clang++ point.o app-main.o -o app-main

point.o: point.cpp point.h
	clang++ -c point.cpp

app-main.o: app-main.cpp point.h
	clang++ -c app-main.cpp

