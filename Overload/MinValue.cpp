#include"Declaration.h"


void MinValueIn(int Arr[ROWS])
{
	cout << "Min value ";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < ROWS; j++)
		{
			if (Arr[j] < Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}

	}
	cout << Arr[0] << endl;
}
void MinValueIn(double Arr[ROWS])
{
	cout << "Min value ";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < ROWS; j++)
		{
			if (Arr[j] < Arr[i])
			{
				double buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}

	}
	cout << Arr[0] << endl;
}
void MinValueIn(char Arr[ROWS])
{
	cout << "Min value ";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < ROWS; j++)
		{
			if (Arr[j] < Arr[i])
			{
				double buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}

	}
	cout << Arr[0] << endl;
}

void MinValueIn(int Arr[ROWS][COLS])
{
	cout << "Min value ";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS - 1; j++)
		{
			if (Arr[i][j] > Arr[i][j + 1])
			{
				double buffer = Arr[i][j + 1];
				Arr[i][j + 1] = Arr[i][j];
				Arr[i][j] = buffer;
			}


		}
	}
	
	if (Arr[0][0] < Arr[ROWS-1][0])
		cout << Arr[0][0] << endl;
	else cout << Arr[ROWS - 1][0] << endl;
	
}
void MinValueIn(double Arr[ROWS][COLS])
{
	cout << "Min value ";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS - 1; j++)
		{
			if (Arr[i][j] > Arr[i][j + 1])
			{
				double buffer = Arr[i][j + 1];
				Arr[i][j + 1] = Arr[i][j];
				Arr[i][j] = buffer;
			}


		}
	}
	
	if (Arr[0][0] < Arr[ROWS-1][0])
		cout << Arr[0][0] << endl;
	else cout << Arr[ROWS - 1][0] << endl;
	
}
void MinValueIn(char Arr[ROWS][COLS])
{
	cout << "Min value ";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS - 1; j++)
		{
			if (Arr[i][j] > Arr[i][j + 1])
			{
				double buffer = Arr[i][j + 1];
				Arr[i][j + 1] = Arr[i][j];
				Arr[i][j] = buffer;
			}


		}
	}
	
	if (Arr[0][0] < Arr[ROWS-1][0])
		cout << Arr[0][0] << endl;
	else cout << Arr[ROWS - 1][0] << endl;
	
}