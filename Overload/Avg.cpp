#include"Declaration.h"

void Avg(int Arr[ROWS])
{
	cout << "Average ";
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		sum += Arr[i];
	}
	cout << double(sum) / ROWS << endl;
	
}
void Avg(double Arr[ROWS])
{
	cout << "Average ";
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		sum += Arr[i];
	}
	cout << double(sum) / ROWS << endl;
}

void Avg(int Arr[ROWS][COLS])
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	double avg=double(sum) / (ROWS + COLS);
	cout << "Average " <<  avg<<endl;
}
void Avg(double Arr[ROWS][COLS])
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += Arr[i][j];
		}
	}
	double avg=double(sum) / (ROWS + COLS);
	cout << "Average " <<  avg<<endl;
}