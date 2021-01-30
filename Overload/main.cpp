#include"Declaration.h"
#include"Print.cpp"

void main()
{
	cout << "1D int array ";
	int i_Arr[ROWS]; //= { 2,1 };
	FillRand(i_Arr);
	Print(i_Arr);
	Sort(i_Arr);
	Print(i_Arr);
	Sum(i_Arr);
	Avg(i_Arr);
	MinValueIn(i_Arr);
	MaxValueIn(i_Arr);
	
	cout << endl;
	cout << "===========================================================" << endl;
	cout << endl;

	cout << "1D double array  ";
	double d_Arr[ROWS];// = { 2.1,1.1 };
	FillRand(d_Arr);
	Print(d_Arr);
	Sort(d_Arr);
	Print(d_Arr);
	Sum(d_Arr);
	Avg(d_Arr);
	MinValueIn(d_Arr);
	MaxValueIn(d_Arr);

	cout << endl;
	cout << "===========================================================" << endl;
	cout << endl;

	cout << "1D char array ";
	char c_Arr[ROWS];// = { 101,100 };
	FillRand(c_Arr);
	Print(c_Arr);
	Sort(c_Arr);
	Print(c_Arr);
	Sum(c_Arr);
	Avg(c_Arr);
	MinValueIn(c_Arr);
	MaxValueIn(c_Arr);

	cout << endl;
	cout << "===========================================================" << endl;
	cout << endl;

	cout << "2D int array: ";
	int i_2d_Arr[ROWS][COLS];
	/*=
	{ 
	{ 4,3 },
	{ 5,2 } 
	};*/
	FillRand(i_2d_Arr);
	Print(i_2d_Arr);
	Sort(i_2d_Arr);
	Print(i_2d_Arr);
	Sum(i_2d_Arr);
	Avg(i_2d_Arr);
	MinValueIn(i_2d_Arr);
	MaxValueIn(i_2d_Arr);

	cout << endl;
	cout << "===========================================================" << endl;
	cout << endl;

	cout << "2D double array: ";
	double d_2d_Arr[ROWS][COLS];
	/*	=
	{
	{ 4.2,3.1 },
	{ 5.5,2.2 }
	};*/
	FillRand(d_2d_Arr);
	Print(d_2d_Arr);
	Sort(d_2d_Arr);
	Print(d_2d_Arr);
	Sum(d_2d_Arr);
	Avg(d_2d_Arr);
	MinValueIn(d_2d_Arr);
	MaxValueIn(d_2d_Arr);

	cout << endl;
	cout << "===========================================================" << endl;
	cout << endl;

	cout << "2D char array: ";
	char c_2d_Arr[ROWS][COLS];
	/*=
	{
	{ 101,100 },
	{ 103,102 }
	};*/
	FillRand(c_2d_Arr);
	Print(c_2d_Arr);
	Sort(c_2d_Arr);
	Print(c_2d_Arr);
	Sum(c_2d_Arr);
	Avg(c_2d_Arr);
	MinValueIn(c_2d_Arr);
	MaxValueIn(c_2d_Arr);


	

	

	





}


















