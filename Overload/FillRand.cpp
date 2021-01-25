#include"Declaration.h"


void FillRand(int arr[])
{
	for (int i = 0; i < ROWS; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[])
{
	for (int i = 0; i < ROWS; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
}
void FillRand(char arr[])
{
	for (int i = 0; i < ROWS; i++)
	{
		arr[i] = rand() % 100;
		
	}
}


void FillRand(int arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;

		}
	}
}
void FillRand(double arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
			arr[i][j] = arr[i][j] / 10;

		}
	}
}
void FillRand(char arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
			
		}
	}
}

