#include"Declaration.h"

void Sort(int Arr[ROWS])
{
	cout << "Sort ";

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

}
void Sort(double Arr[ROWS])
{
	cout << "Sort ";

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

}
void Sort(char Arr[ROWS])
{
	cout << "Sort ";

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

}

void Sort(int Arr[ROWS][COLS])
{
	cout << "Sort ";
	for (int i = 0; i < ROWS; i++)
	{
		for ( int j = 0; j < COLS-1; j++)
		{
			if (Arr[i][j] > Arr[i][j+1])
			{
				double buffer = Arr[i][j+1];
				Arr[i][j+1] = Arr[i][j];
				Arr[i][j] = buffer;
			}
			

		}
	}
}
void Sort(double Arr[ROWS][COLS])
{
	cout << "Sort ";
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
}
void Sort(char Arr[ROWS][COLS])
{
	cout << "Sort ";
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
}


	