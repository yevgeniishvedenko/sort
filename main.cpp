#include "functions.h"
#include "sort.cpp"

void main()
{
	setlocale(LC_ALL, "Rus");
	
	int arr[n];
	double arr_d[n];
	int arr_2d[ROWS][COLS];
	double arr_2d_d[ROWS][COLS];
	cout << "================================================" << endl;
	cout << "���������� ����������� ��������������:" << endl;
	Sort(arr, n);
	cout << "================================================" << endl;
	cout << "���������� ���������� ��������������:" << endl;
	Sort(arr_2d, ROWS, COLS);
	cout << "================================================" << endl;
	cout << "���������� ����������� � ��������� ������:" << endl;
	Sort(arr_d, n);
	cout << "================================================" << endl;
	cout << "���������� ���������� � ��������� ������:" << endl;
	Sort(arr_2d_d, ROWS, COLS);
}