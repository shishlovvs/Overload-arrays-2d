#pragma once
#include"stdafx.h"


short Sum(short arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(short arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(float arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);


short minValue(short arr[ROWS][COLS], const int ROWS, const int COLS);
int minValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
float minValue(float arr[ROWS][COLS], const int ROWS, const int COLS);
double minValue(double arr[ROWS][COLS], const int ROWS, const int COLS);


short maxValue(short arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
float maxValue(float arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValue(double arr[ROWS][COLS], const int ROWS, const int COLS);