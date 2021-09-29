#include<iostream>
using namespace std;

//#define HOMEWORK
#define delimiter "\n------------------------------------------------------------\n"

void FillRand(int arr[], const int n); //������� ���������� ���������� �������
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(short arr[], const int n);
void FillRand(char arr[], const int n);
//��� ��������� - ��� ������ � ������ ����� ������� (const int n - ���������� ���������)
//��� ��� - �������� �������

void Print(int arr[], const int n);//������� ������ �� �����
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(short arr[], const int n);
void Print(char arr[], const int n);

void Sort(int arr[], const int n);//������� ����������
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);
void Sort(short arr[], const int n);
void Sort(char arr[], const int n);

int Sum(int arr[], const int n);//����� ��������� �������
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
short Sum(short arr[], const int n);
//char Sum(char arr[], const int n);

double Avg(int arr[], const int n);//������� �������������� ��������� �������
double Avg(double arr[], const int n);
double Avg(float arr[], const int n);
double Avg(short arr[], const int n);
//double Avg(char arr[], const int n);

int MinValueIn(int arr[], const int n);//����������� �������� �������
double MinValueIn(double arr[], const int n);
float MinValueIn(float arr[], const int n);
short MinValueIn(short arr[], const int n);
char MinValueIn(char arr[], const int n);

int MaxValueIn(int arr[], const int n);//������������ �������� �������
double MaxValueIn(double arr[], const int n);
float MaxValueIn(float arr[], const int n);
short MaxValueIn(short arr[], const int n);
char MaxValueIn(char arr[], const int n);

void ShiftLeft(int arr[], const int n);//����� ����� �� ������������ ���������� ��������
void ShiftLeft(double arr[], const int n);//����� ����� �� ������������ ���������� ��������
void ShiftLeft(float arr[], const int n);//����� ����� �� ������������ ���������� ��������
void ShiftLeft(short arr[], const int n);//����� ����� �� ������������ ���������� ��������
void ShiftLeft(char arr[], const int n);//����� ����� �� ������������ ���������� ��������

void ShiftRight(int arr[], const int n);//����� ������ �� ������������ ���������� ��������
void ShiftRight(double arr[], const int n);//����� ������ �� ������������ ���������� ��������
void ShiftRight(float arr[], const int n);//����� ������ �� ������������ ���������� ��������
void ShiftRight(short arr[], const int n);//����� ������ �� ������������ ���������� ��������
void ShiftRight(char arr[], const int n);//����� ������ �� ������������ ���������� ��������




void main()
{
	setlocale(LC_ALL, "ru");

#ifdef HOMEWORK
	const int n = 5;
	int arr[n];

	cout << "Int: " << endl;

	FillRand(arr, n);//��������� ��� ���������� �������
	Print(arr, n);//������� ������ �� �����
	Sort(arr, n);//���������� �������
	Print(arr, n);//����� ���������������� �������
	cout << "����� ���� ���������: " << Sum(arr, n) << endl;;//����� ��������� �������
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;//������� �������������� ��������� �������
	cout << "����������� �������� �������: " << MinValueIn(arr, n) << endl;//����������� �������� �������
	cout << "������������ �������� �������: " << MaxValueIn(arr, n) << endl;//������������ �������� �������
	ShiftLeft(arr, n);//����� ����� �� ������������ ���������� ��������
	Print(arr, n);//������� ������ �� �����
	ShiftRight(arr, n);//����� ������ �� ������������ ���������� ��������
	Print(arr, n);//������� ������ �� �����

	cout << delimiter << endl;
	////////////////////////////////////////////////////////////////////////////////////////


	const int B_SIZE = 8;
	double brr[B_SIZE];

	cout << "Double: " << endl;

	FillRand(brr, B_SIZE);//��������� ��� ���������� �������
	Print(brr, B_SIZE);//������� ������ �� �����
	Sort(brr, B_SIZE);//���������� �������
	Print(brr, B_SIZE);	//����� ���������������� �������
	cout << "����� ���� ���������: " << Sum(brr, B_SIZE) << endl;;//����� ��������� �������
	cout << "������� �������������� ��������� �������: " << Avg(brr, B_SIZE) << endl;//������� �������������� ��������� �������
	cout << "����������� �������� �������: " << MinValueIn(brr, B_SIZE) << endl;//����������� �������� �������
	cout << "������������ �������� �������: " << MaxValueIn(brr, B_SIZE) << endl;//������������ �������� �������
	ShiftLeft(brr, B_SIZE);//����� ����� �� ������������ ���������� ��������
	Print(brr, B_SIZE);//������� ������ �� �����
	ShiftRight(brr, B_SIZE);//����� ������ �� ������������ ���������� ��������
	Print(brr, B_SIZE);//������� ������ �� �����

	cout << delimiter << endl;
	////////////////////////////////////////////////////////////////////////////////////////

	const int C_SIZE = 10;
	float crr[C_SIZE];

	cout << "Float: " << endl;

	FillRand(crr, C_SIZE);//��������� ��� ���������� �������
	Print(crr, C_SIZE);//������� ������ �� �����
	Sort(crr, C_SIZE);//���������� �������
	Print(crr, C_SIZE);//����� ���������������� �������
	cout << "����� ���� ���������: " << Sum(crr, C_SIZE) << endl;;//����� ��������� �������
	cout << "������� �������������� ��������� �������: " << Avg(crr, C_SIZE) << endl;//������� �������������� ��������� �������
	cout << "����������� �������� �������: " << MinValueIn(crr, C_SIZE) << endl;//����������� �������� �������
	cout << "������������ �������� �������: " << MaxValueIn(crr, C_SIZE) << endl;//������������ �������� �������
	ShiftLeft(crr, C_SIZE);//����� ����� �� ������������ ���������� ��������
	Print(crr, C_SIZE);//������� ������ �� �����
	ShiftRight(crr, C_SIZE);//����� ������ �� ������������ ���������� ��������
	Print(crr, C_SIZE);//������� ������ �� �����

	cout << delimiter << endl;
	////////////////////////////////////////////////////////////////////////////////////////

	const int D_SIZE = 15;
	short drr[D_SIZE];

	cout << "Short: " << endl;

	FillRand(drr, D_SIZE);//��������� ��� ���������� �������
	Print(drr, D_SIZE);//������� ������ �� �����
	Sort(drr, D_SIZE);//���������� �������
	Print(drr, D_SIZE);//����� ���������������� �������
	cout << "����� ���� ���������: " << Sum(drr, D_SIZE) << endl;;//����� ��������� �������
	cout << "������� �������������� ��������� �������: " << Avg(drr, D_SIZE) << endl;//������� �������������� ��������� �������
	cout << "����������� �������� �������: " << MinValueIn(drr, D_SIZE) << endl;//����������� �������� �������
	cout << "������������ �������� �������: " << MaxValueIn(drr, D_SIZE) << endl;//������������ �������� �������
	ShiftLeft(drr, D_SIZE);//����� ����� �� ������������ ���������� ��������
	Print(drr, D_SIZE);//������� ������ �� �����
	ShiftRight(drr, D_SIZE);//����� ������ �� ������������ ���������� ��������
	Print(drr, D_SIZE);//������� ������ �� �����


	cout << delimiter << endl;
	////////////////////////////////////////////////////////////////////////////////////////

	const int E_SIZE = 20;
	char err[E_SIZE];

	cout << "Char: " << endl;

	FillRand(err, E_SIZE);//��������� ��� ���������� �������
	Print(err, E_SIZE);//������� ������ �� �����
	Sort(err, E_SIZE);//���������� �������
	Print(err, E_SIZE);//����� ���������������� �������
	//cout << "����� ���� ���������: " << Sum(err, E_SIZE) << endl;;//����� ��������� �������
	//cout << "������� �������������� ��������� �������: " << Avg(err, E_SIZE) << endl;//������� �������������� ��������� �������
	cout << "����������� �������� �������: " << MinValueIn(err, E_SIZE) << endl;//����������� �������� �������
	cout << "������������ �������� �������: " << MaxValueIn(err, E_SIZE) << endl;//������������ �������� �������
	ShiftLeft(err, E_SIZE);//����� ����� �� ������������ ���������� ��������
	Print(err, E_SIZE);//������� ������ �� �����
	ShiftRight(err, E_SIZE);//����� ������ �� ������������ ���������� ��������
	Print(err, E_SIZE);//������� ������ �� �����

#endif // HOMEWORK

	const int ROWS = 3;
	const int COLS = 8;
	int i_arr_2[ROWS][COLS];

}

void FillRand(int arr[], const int n)
{
	//��������� ��� ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	} cout << endl;
}
void FillRand(double arr[], const int n)
{
	//��������� ��� ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 10000) / 100;
	} cout << endl;
}
void FillRand(float arr[], const int n)
{
	//��������� ��� ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 10000) / 100;
	} cout << endl;
}
void FillRand(short arr[], const int n)
{
	//��������� ��� ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = short(rand() % 10000) / 10;
	} cout << endl;
}
void FillRand(char arr[], const int n)
{
	//��������� ��� ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = char(rand() % 255);
	} cout << endl;
}

void Print(int arr[], const int n)
{
	//������� ������ �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	} cout << endl;
}
void Print(double arr[], const int n)
{
	//������� ������ �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	} cout << endl;
}
void Print(float arr[], const int n)
{
	//������� ������ �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	} cout << endl;
}
void Print(short arr[], const int n)
{
	//������� ������ �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	} cout << endl;
}
void Print(char arr[], const int n)
{
	//������� ������ �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	} cout << endl;
}

void Sort(int arr[], const int n)
{
	//���������� �������
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
	//���������� �������
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
	//���������� �������
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
	//���������� �������
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
	//���������� �������
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
	//cout << "����� ��������� �������: " << sum << endl;
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "����� ��������� �������: " << sum << endl;
	return sum;
}
float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "����� ��������� �������: " << sum << endl;
	return sum;
}
short Sum(short arr[], const int n)
{
	short sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "����� ��������� �������: " << sum << endl;
	return sum;
}
//char Sum(char arr[], const int n)
//{
//	char sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	//cout << "����� ��������� �������: " << sum << endl;
//	return sum;
//}
double Avg(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "������� ������������� ��������� �������: " << (double)sum / n << endl;
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "������� ������������� ��������� �������: " << (double)sum / n << endl;
	return (double)Sum(arr, n) / n;
}
double Avg(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "������� ������������� ��������� �������: " << (double)sum / n << endl;
	return (double)Sum(arr, n) / n;
}
double Avg(short arr[], const int n)
{
	short sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "������� ������������� ��������� �������: " << (double)sum / n << endl;
	return (double)Sum(arr, n) / n;
}
//double Avg(char arr[], const int n)
//{
//	char sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	//cout << "������� ������������� ��������� �������: " << (double)sum / n << endl;
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

	//����� ������� �����
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

	//����� ������� �����
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

	//����� ������� �����
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

	//����� ������� �����
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

	//����� ������� �����
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

	//����� ������� ������
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

	//����� ������� ������
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

	//����� ������� ������
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

	//����� ������� ������
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

	//����� ������� ������
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