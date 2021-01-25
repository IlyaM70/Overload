#include"Declaration.h"

void MaxValueIn(int Arr[ROWS])
{
	cout << "Max value ";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < ROWS; j++)
		{
			if (Arr[j] > Arr[i])
			{
				int buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}

	}
	cout << Arr[0] << endl;
}
void MaxValueIn(double Arr[ROWS])
{
	cout << "Max value ";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < ROWS; j++)
		{
			if (Arr[j] > Arr[i])
			{
				double buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}

	}
	cout << Arr[0] << endl;
}
void MaxValueIn(char Arr[ROWS])
{
	cout << "Max value ";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i + 1; j < ROWS; j++)
		{
			if (Arr[j] > Arr[i])
			{
				double buffer = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = buffer;
			}
		}

	}
	cout << Arr[0] << endl;
}

void MaxValueIn(int Arr[ROWS][COLS])
{
	cout << "Max value ";
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

	if (Arr[0][ROWS-1] > Arr[COLS-1][ROWS-1])
		cout << Arr[0][ROWS - 1] << endl;
	else cout << Arr[COLS - 1][ROWS - 1] << endl;

}
void MaxValueIn(double Arr[ROWS][COLS])
{
	cout << "Max value ";
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

	if (Arr[0][ROWS-1] > Arr[COLS-1][ROWS-1])
		cout << Arr[0][ROWS - 1] << endl;
	else cout << Arr[COLS - 1][ROWS - 1] << endl;

}
void MaxValueIn(char Arr[ROWS][COLS])
{
	cout << "Max value ";
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

	if (Arr[0][ROWS-1] > Arr[COLS-1][ROWS-1])
		cout << Arr[0][ROWS - 1] << endl;
	else cout << Arr[COLS - 1][ROWS - 1] << endl;

}