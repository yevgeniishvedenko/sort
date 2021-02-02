#include "functions.h"

template <typename T> void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
	for (int i = 0; i < n; i++) cout << arr[i] << "  ";
	cout << endl;
	//сортирока
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				T buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
		}
	}
	for (int i = 0; i < n; i++) cout << arr[i] << "  ";
	cout << endl;
}

template <typename T> void Sort(T arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 1000;
			arr[i][j] /= 10;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) cout << arr[i][j] << "  ";
		cout << endl;
	}
	cout << endl;
	//сортировка
	for (int c = 0; c <= (m * n); c++)//проходы
	{
		//упоряд строки
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n - 1; j++)
			{
				if (arr[i][j] > arr[i][j + 1])
				{
					T buf = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = buf;
				}
			}
		}
		//упоряд столбц
		for (int x = 0; x < n; x++)
		{
			for (int z = 0; z < m - 1; z++)
			{
				if (arr[z][x] > arr[z][x + 1])
				{
					T buf = arr[z][x];
					arr[z][x] = arr[z][x + 1];
					arr[z][x + 1] = buf;
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) cout << arr[i][j] << "  ";
		cout << endl;
	}
}