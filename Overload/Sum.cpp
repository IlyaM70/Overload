#include"Declaration.h"

void Sum(int Arr[ROWS])
{
	cout << "Sum ";
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		sum += Arr[i];
	}
	cout << sum << endl;

}
void Sum(double Arr[ROWS])
{
	cout << "Sum ";
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		sum += Arr[i];
	}
	cout << sum << endl;
}
void Sum(char Arr[ROWS])
{
	cout << "Sum ";
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		sum += Arr[i];
	}
	cout << char(sum) << endl;
}


int Sum(int Arr[ROWS][COLS])
{
	cout << "Sum ";
		int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	cout << sum << endl;
	return sum;
}
double Sum(double Arr[ROWS][COLS])
{
	cout << "Sum ";
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	cout << sum << endl;
	return sum;
}
char Sum(char Arr[ROWS][COLS])
{
	cout << "Sum ";
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	cout << char(sum) << endl;
	return sum;
}