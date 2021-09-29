#include<iostream>
using namespace std;

//#define HOMEWORK
#define delimiter "\n------------------------------------------------------------\n"

void FillRand(int arr[], const int n); //Функция заполнения рандомными числами
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(short arr[], const int n);
void FillRand(char arr[], const int n);
//Два параметра - сам массив и размер этого массива (const int n - количество элементов)
//Все это - прототип функции

void Print(int arr[], const int n);//Функция вывода на экран
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(short arr[], const int n);
void Print(char arr[], const int n);

void Sort(int arr[], const int n);//функция сортировки
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);
void Sort(short arr[], const int n);
void Sort(char arr[], const int n);

int Sum(int arr[], const int n);//Сумма элементов массива
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
short Sum(short arr[], const int n);
//char Sum(char arr[], const int n);

double Avg(int arr[], const int n);//Среднее арифметическое элементов массива
double Avg(double arr[], const int n);
double Avg(float arr[], const int n);
double Avg(short arr[], const int n);
//double Avg(char arr[], const int n);

int MinValueIn(int arr[], const int n);//Минимальное значение массива
double MinValueIn(double arr[], const int n);
float MinValueIn(float arr[], const int n);
short MinValueIn(short arr[], const int n);
char MinValueIn(char arr[], const int n);

int MaxValueIn(int arr[], const int n);//Максимальное значение массива
double MaxValueIn(double arr[], const int n);
float MaxValueIn(float arr[], const int n);
short MaxValueIn(short arr[], const int n);
char MaxValueIn(char arr[], const int n);

void ShiftLeft(int arr[], const int n);//Сдвиг влево на определенное количество символов
void ShiftLeft(double arr[], const int n);//Сдвиг влево на определенное количество символов
void ShiftLeft(float arr[], const int n);//Сдвиг влево на определенное количество символов
void ShiftLeft(short arr[], const int n);//Сдвиг влево на определенное количество символов
void ShiftLeft(char arr[], const int n);//Сдвиг влево на определенное количество символов

void ShiftRight(int arr[], const int n);//Сдвиг вправо на определенное количество символов
void ShiftRight(double arr[], const int n);//Сдвиг вправо на определенное количество символов
void ShiftRight(float arr[], const int n);//Сдвиг вправо на определенное количество символов
void ShiftRight(short arr[], const int n);//Сдвиг вправо на определенное количество символов
void ShiftRight(char arr[], const int n);//Сдвиг вправо на определенное количество символов




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
	int i_arr_2[ROWS][COLS];

}

void FillRand(int arr[], const int n)
{
	//заполнить его случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	} cout << endl;
}
void FillRand(double arr[], const int n)
{
	//заполнить его случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 10000) / 100;
	} cout << endl;
}
void FillRand(float arr[], const int n)
{
	//заполнить его случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 10000) / 100;
	} cout << endl;
}
void FillRand(short arr[], const int n)
{
	//заполнить его случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = short(rand() % 10000) / 10;
	} cout << endl;
}
void FillRand(char arr[], const int n)
{
	//заполнить его случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = char(rand() % 255);
	} cout << endl;
}

void Print(int arr[], const int n)
{
	//выводим массив на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	} cout << endl;
}
void Print(double arr[], const int n)
{
	//выводим массив на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	} cout << endl;
}
void Print(float arr[], const int n)
{
	//выводим массив на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	} cout << endl;
}
void Print(short arr[], const int n)
{
	//выводим массив на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	} cout << endl;
}
void Print(char arr[], const int n)
{
	//выводим массив на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	} cout << endl;
}

void Sort(int arr[], const int n)
{
	//сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	//сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(float arr[], const int n)
{
	//сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(short arr[], const int n)
{
	//сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				short buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	//сортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Сумма элементов массива: " << sum << endl;
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Сумма элементов массива: " << sum << endl;
	return sum;
}
float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Сумма элементов массива: " << sum << endl;
	return sum;
}
short Sum(short arr[], const int n)
{
	short sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Сумма элементов массива: " << sum << endl;
	return sum;
}
//char Sum(char arr[], const int n)
//{
//	char sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	//cout << "Сумма элементов массива: " << sum << endl;
//	return sum;
//}
double Avg(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Среднее арифметичское элементов массива: " << (double)sum / n << endl;
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Среднее арифметичское элементов массива: " << (double)sum / n << endl;
	return (double)Sum(arr, n) / n;
}
double Avg(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Среднее арифметичское элементов массива: " << (double)sum / n << endl;
	return (double)Sum(arr, n) / n;
}
double Avg(short arr[], const int n)
{
	short sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Среднее арифметичское элементов массива: " << (double)sum / n << endl;
	return (double)Sum(arr, n) / n;
}
//double Avg(char arr[], const int n)
//{
//	char sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	//cout << "Среднее арифметичское элементов массива: " << (double)sum / n << endl;
//	return (double)Sum(arr, n) / n;
//}
int MinValueIn(int arr[], const int n)
{
	int min_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_element)
		{
			min_element = arr[i];
		}
	}
	return min_element;
}
double MinValueIn(double arr[], const int n)
{
	double min_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_element)
		{
			min_element = arr[i];
		}
	}
	return min_element;
}
float MinValueIn(float arr[], const int n)
{
	float min_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_element)
		{
			min_element = arr[i];
		}
	}
	return min_element;
}
short MinValueIn(short arr[], const int n)
{
	short min_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_element)
		{
			min_element = arr[i];
		}
	}
	return min_element;
}
char MinValueIn(char arr[], const int n)
{
	char min_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_element)
		{
			min_element = arr[i];
		}
	}
	return min_element;
}
int MaxValueIn(int arr[], const int n)
{
	int max_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_element)
		{
			max_element = arr[i];
		}
	}
	return max_element;
}
double MaxValueIn(double arr[], const int n)
{
	double max_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_element)
		{
			max_element = arr[i];
		}
	}
	return max_element;
}
float MaxValueIn(float arr[], const int n)
{
	float max_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_element)
		{
			max_element = arr[i];
		}
	}
	return max_element;
}
short MaxValueIn(short arr[], const int n)
{
	short max_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_element)
		{
			max_element = arr[i];
		}
	}
	return max_element;
}
char MaxValueIn(char arr[], const int n)
{
	char max_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_element)
		{
			max_element = arr[i];
		}
	}
	return max_element;
}
void ShiftLeft(int arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива влево
	for (int i = 0; i < step_of_shifts; i++)
	{
		int c = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = c;
	}
}

void ShiftLeft(double arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива влево
	for (int i = 0; i < step_of_shifts; i++)
	{
		double c = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = c;
	}
}
void ShiftLeft(float arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива влево
	for (int i = 0; i < step_of_shifts; i++)
	{
		float c = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = c;
	}
}
void ShiftLeft(short arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива влево
	for (int i = 0; i < step_of_shifts; i++)
	{
		short c = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = c;
	}
}
void ShiftLeft(char arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива влево
	for (int i = 0; i < step_of_shifts; i++)
	{
		char c = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = c;
	}
}
void ShiftRight(int arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива вправо
	for (int i = 0; i < step_of_shifts; i++)
	{
		int d = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = d;
	}
}
void ShiftRight(double arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива вправо
	for (int i = 0; i < step_of_shifts; i++)
	{
		double d = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = d;
	}
}
void ShiftRight(float arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива вправо
	for (int i = 0; i < step_of_shifts; i++)
	{
		float d = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = d;
	}
}
void ShiftRight(short arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива вправо
	for (int i = 0; i < step_of_shifts; i++)
	{
		short d = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = d;
	}
}
void ShiftRight(char arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива вправо
	for (int i = 0; i < step_of_shifts; i++)
	{
		char d = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = d;
	}
}