#include "DZ5.h";

void recieve(double* arr, unsigned size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
	
}
void recieve(int* arr, unsigned size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
	
}
void recieve(int** mas, int rows, int cols)
{
	srand(time(NULL));
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			mas[i][j] = rand() % 50 + 10;
		}
	}
}
void print(int** mas, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << endl;
}

void print(double* arr, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl << endl;
}
void print(int* arr, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl << endl;
}

void replace(int* a, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			swap(a[i], a[i + 1]);
		}
	}
}
