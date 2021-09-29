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

	cout << "Short" << endl;
	cout << endl;
	short i_arr_21[ROWS][COLS];
	FillRand(i_arr_21, ROWS, COLS);
	Print(i_arr_21, ROWS, COLS);
	Sort(i_arr_21, ROWS, COLS);
	Print(i_arr_21, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_21, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(i_arr_21, ROWS, COLS) << endl;
	cout << "����������� �������� ��������� �������: " << minValue(i_arr_21, ROWS, COLS) << endl;
	cout << "������������ �������� �������� ��������� �������: " << maxValue(i_arr_21, ROWS, COLS) << endl << endl;

	cout << "Integer" << endl;
	cout << endl;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� ��������� �������: " << minValue(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� �������� ��������� �������: " << maxValue(i_arr_2, ROWS, COLS) << endl << endl;

	cout << "Float" << endl;
	cout << endl;
	float i_arr_22[ROWS][COLS];
	FillRand(i_arr_22, ROWS, COLS);
	Print(i_arr_22, ROWS, COLS);
	Sort(i_arr_22, ROWS, COLS);
	Print(i_arr_22, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_22, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(i_arr_22, ROWS, COLS) << endl;
	cout << "����������� �������� ��������� �������: " << minValue(i_arr_22, ROWS, COLS) << endl;
	cout << "������������ �������� �������� ��������� �������: " << maxValue(i_arr_22, ROWS, COLS) << endl << endl;

	cout << "Double" << endl;
	cout << endl;
	double i_arr_23[ROWS][COLS];
	FillRand(i_arr_23, ROWS, COLS);
	Print(i_arr_23, ROWS, COLS);
	Sort(i_arr_23, ROWS, COLS);
	Print(i_arr_23, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_23, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(i_arr_23, ROWS, COLS) << endl;
	cout << "����������� �������� ��������� �������: " << minValue(i_arr_23, ROWS, COLS) << endl;
	cout << "������������ �������� �������� ��������� �������: " << maxValue(i_arr_23, ROWS, COLS) << endl << endl;

	cout << "Char" << endl;
	cout << endl;
	char i_arr_24[ROWS][COLS];
	FillRand(i_arr_24, ROWS, COLS);
	Print(i_arr_24, ROWS, COLS);
	Sort(i_arr_24, ROWS, COLS);
	Print(i_arr_24, ROWS, COLS);

}


