#include "DZ5.h";

int main()
{
	setlocale(LC_ALL, "Rus");
	int n,k,rows,cols;
	int* a = new int[12];
	do 
	{
		cout << "������� ������ ������� " << endl;
		cin >> n;

		double* arr = new double[n];
		recieve(arr, n);
		print(arr, n);
		delete[] arr;
		cout << "��� ����������� ������� 1, ��� ������ 0 " << endl;
		cin >> k;

	} while (k != 0);
	recieve(a, 12);
	print(a, 12);
	replace(a, 12);
	print(a, 12);

	cout << "������� ���������� ����� � �������� ����� ������" << endl;
	cin >> rows >> cols;
	int** mas = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		mas[i] = new int[cols];
	}
	recieve(mas, rows, cols);
	print(mas, rows, cols);
	for (int count = 0; count < rows; count++) {
		delete[] mas[count];
	}
	delete[] mas;

	return 0;
}