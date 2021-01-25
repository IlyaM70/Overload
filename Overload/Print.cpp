#include"Declaration.h"

void Print(int Arr[ROWS])
{
	for (int i = 0; i < ROWS; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
void Print(double Arr[ROWS])
{
	for (int i = 0; i < ROWS; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << endl;
}
void Print(char Arr[ROWS])
{
	for (int i = 0; i < ROWS; i++)
	{
		cout << (Arr[i]) << "\t";
	}
	cout << endl;
}

void Print(int Arr[ROWS][COLS])
{
	cout << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (j == 0) cout << "\t\t";
			cout << Arr[i][j] << "\t";
			if (j==ROWS-1 ) cout << endl;
		}
	}
	cout << endl;
}
void Print(double Arr[ROWS][COLS])
{
	cout << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (j == 0) cout << "\t\t";
			cout << Arr[i][j] << "\t";
			if (j == ROWS - 1) cout << endl;
		}
	}
	cout << endl;
}
void Print(char Arr[ROWS][COLS])
{
	cout << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (j == 0) cout << "\t\t";
			cout << Arr[i][j] << "\t";
			if (j == ROWS - 1) cout << endl;
		}
	}
	cout << endl;
}