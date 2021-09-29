#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"

using namespace std;

//#define HOMEWORK
#define delimiter "\n------------------------------------------------------------\n"


void main()
{
	setlocale(LC_ALL, "ru");

#ifdef HOMEWORK
	const int n = 5;
	int arr[n];

	cout << "Int: " << endl;

	FillRand(arr, n);//заполнить его случайными числами
	Print(arr, n);//выводим массив на экран
	Sort(arr, n);//сортировка массива
	Print(arr, n);//вывод отсортированного массива
	cout << "Сумма всех элементов: " << Sum(arr, n) << endl;;//Сумма элементов массива
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;//Среднее арифметическое элементов массива
	cout << "Минимальное значение массива: " << MinValueIn(arr, n) << endl;//Минимальное значение массива
	cout << "Максимальное значение массива: " << MaxValueIn(arr, n) << endl;//Максимальное значение массива
	ShiftLeft(arr, n);//Сдвиг влево на определенное количество символов
	Print(arr, n);//выводим массив на экран
	ShiftRight(arr, n);//Сдвиг вправо на определенное количество символов
	Print(arr, n);//выводим массив на экран

	cout << delimiter << endl;
	////////////////////////////////////////////////////////////////////////////////////////


	const int B_SIZE = 8;
	double brr[B_SIZE];

	cout << "Double: " << endl;

	FillRand(brr, B_SIZE);//заполнить его случайными числами
	Print(brr, B_SIZE);//выводим массив на экран
	Sort(brr, B_SIZE);//сортировка массива
	Print(brr, B_SIZE);	//вывод отсортированного массива
	cout << "Сумма всех элементов: " << Sum(brr, B_SIZE) << endl;;//Сумма элементов массива
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, B_SIZE) << endl;//Среднее арифметическое элементов массива
	cout << "Минимальное значение массива: " << MinValueIn(brr, B_SIZE) << endl;//Минимальное значение массива
	cout << "Максимальное значение массива: " << MaxValueIn(brr, B_SIZE) << endl;//Максимальное значение массива
	ShiftLeft(brr, B_SIZE);//Сдвиг влево на определенное количество символов
	Print(brr, B_SIZE);//выводим массив на экран
	ShiftRight(brr, B_SIZE);//Сдвиг вправо на определенное количество символов
	Print(brr, B_SIZE);//выводим массив на экран

	cout << delimiter << endl;
	////////////////////////////////////////////////////////////////////////////////////////

	const int C_SIZE = 10;
	float crr[C_SIZE];

	cout << "Float: " << endl;

	FillRand(crr, C_SIZE);//заполнить его случайными числами
	Print(crr, C_SIZE);//выводим массив на экран
	Sort(crr, C_SIZE);//сортировка массива
	Print(crr, C_SIZE);//вывод отсортированного массива
	cout << "Сумма всех элементов: " << Sum(crr, C_SIZE) << endl;;//Сумма элементов массива
	cout << "Среднее арифметическое элементов массива: " << Avg(crr, C_SIZE) << endl;//Среднее арифметическое элементов массива
	cout << "Минимальное значение массива: " << MinValueIn(crr, C_SIZE) << endl;//Минимальное значение массива
	cout << "Максимальное значение массива: " << MaxValueIn(crr, C_SIZE) << endl;//Максимальное значение массива
	ShiftLeft(crr, C_SIZE);//Сдвиг влево на определенное количество символов
	Print(crr, C_SIZE);//выводим массив на экран
	ShiftRight(crr, C_SIZE);//Сдвиг вправо на определенное количество символов
	Print(crr, C_SIZE);//выводим массив на экран

	cout << delimiter << endl;
	////////////////////////////////////////////////////////////////////////////////////////

	const int D_SIZE = 15;
	short drr[D_SIZE];

	cout << "Short: " << endl;

	FillRand(drr, D_SIZE);//заполнить его случайными числами
	Print(drr, D_SIZE);//выводим массив на экран
	Sort(drr, D_SIZE);//сортировка массива
	Print(drr, D_SIZE);//вывод отсортированного массива
	cout << "Сумма всех элементов: " << Sum(drr, D_SIZE) << endl;;//Сумма элементов массива
	cout << "Среднее арифметическое элементов массива: " << Avg(drr, D_SIZE) << endl;//Среднее арифметическое элементов массива
	cout << "Минимальное значение массива: " << MinValueIn(drr, D_SIZE) << endl;//Минимальное значение массива
	cout << "Максимальное значение массива: " << MaxValueIn(drr, D_SIZE) << endl;//Максимальное значение массива
	ShiftLeft(drr, D_SIZE);//Сдвиг влево на определенное количество символов
	Print(drr, D_SIZE);//выводим массив на экран
	ShiftRight(drr, D_SIZE);//Сдвиг вправо на определенное количество символов
	Print(drr, D_SIZE);//выводим массив на экран


	cout << delimiter << endl;
	////////////////////////////////////////////////////////////////////////////////////////

	const int E_SIZE = 20;
	char err[E_SIZE];

	cout << "Char: " << endl;

	FillRand(err, E_SIZE);//заполнить его случайными числами
	Print(err, E_SIZE);//выводим массив на экран
	Sort(err, E_SIZE);//сортировка массива
	Print(err, E_SIZE);//вывод отсортированного массива
	//cout << "Сумма всех элементов: " << Sum(err, E_SIZE) << endl;;//Сумма элементов массива
	//cout << "Среднее арифметическое элементов массива: " << Avg(err, E_SIZE) << endl;//Среднее арифметическое элементов массива
	cout << "Минимальное значение массива: " << MinValueIn(err, E_SIZE) << endl;//Минимальное значение массива
	cout << "Максимальное значение массива: " << MaxValueIn(err, E_SIZE) << endl;//Максимальное значение массива
	ShiftLeft(err, E_SIZE);//Сдвиг влево на определенное количество символов
	Print(err, E_SIZE);//выводим массив на экран
	ShiftRight(err, E_SIZE);//Сдвиг вправо на определенное количество символов
	Print(err, E_SIZE);//выводим массив на экран

#endif // HOMEWORK

	const int ROWS = 3;
	const int COLS = 8;

	cout << "Short" << endl;
	cout << endl;
	short i_arr_21[ROWS][COLS];
	FillRand(i_arr_21, ROWS, COLS);
	Print(i_arr_21, ROWS, COLS);
	Sort(i_arr_21, ROWS, COLS);
	Print(i_arr_21, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_21, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_21, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов массива: " << minValue(i_arr_21, ROWS, COLS) << endl;
	cout << "Максимальное значение значение элементов массива: " << maxValue(i_arr_21, ROWS, COLS) << endl << endl;

	cout << "Integer" << endl;
	cout << endl;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов массива: " << minValue(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение значение элементов массива: " << maxValue(i_arr_2, ROWS, COLS) << endl << endl;

	cout << "Float" << endl;
	cout << endl;
	float i_arr_22[ROWS][COLS];
	FillRand(i_arr_22, ROWS, COLS);
	Print(i_arr_22, ROWS, COLS);
	Sort(i_arr_22, ROWS, COLS);
	Print(i_arr_22, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_22, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_22, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов массива: " << minValue(i_arr_22, ROWS, COLS) << endl;
	cout << "Максимальное значение значение элементов массива: " << maxValue(i_arr_22, ROWS, COLS) << endl << endl;

	cout << "Double" << endl;
	cout << endl;
	double i_arr_23[ROWS][COLS];
	FillRand(i_arr_23, ROWS, COLS);
	Print(i_arr_23, ROWS, COLS);
	Sort(i_arr_23, ROWS, COLS);
	Print(i_arr_23, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_23, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_23, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов массива: " << minValue(i_arr_23, ROWS, COLS) << endl;
	cout << "Максимальное значение значение элементов массива: " << maxValue(i_arr_23, ROWS, COLS) << endl << endl;

	cout << "Char" << endl;
	cout << endl;
	char i_arr_24[ROWS][COLS];
	FillRand(i_arr_24, ROWS, COLS);
	Print(i_arr_24, ROWS, COLS);
	Sort(i_arr_24, ROWS, COLS);
	Print(i_arr_24, ROWS, COLS);

}


