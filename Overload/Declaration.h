#pragma once
#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLS = 2;

void FillRand(int arr[]);
void FillRand(double arr[]);
void FillRand(char arr[]);

void FillRand(int arr[ROWS][COLS]);
void FillRand(double arr[ROWS][COLS]);
void FillRand(char arr[ROWS][COLS]);

void Print(int Arr[ROWS]);
void Print(double Arr[ROWS]);
void Print(char Arr[ROWS]);

void Print(int Arr[ROWS][COLS]);
void Print(double Arr[ROWS][COLS]);
void Print(char Arr[ROWS][COLS]);


void Sort(int Arr[ROWS]);
void Sort(char Arr[ROWS]);
void Sort(double Arr[ROWS]);

void Sort(int Arr[ROWS][COLS]);
void Sort(char Arr[ROWS][COLS]);
void Sort(double Arr[ROWS][COLS]);

void Sum(int Arr[ROWS]);
void Sum(double Arr[ROWS]);
void Sum(char Arr[ROWS]);

int Sum(int Arr[ROWS][COLS]);
double Sum(double Arr[ROWS][COLS]);
char Sum(char Arr[ROWS][COLS]);

void Avg(int Arr[ROWS]);
void Avg(double Arr[ROWS]);
void Avg(char Arr[ROWS]);

void Avg(int Arr[ROWS][COLS]);
void Avg(double Arr[ROWS][COLS]);
void Avg(char Arr[ROWS][COLS]);

void MinValueIn(int Arr[ROWS]);
void MinValueIn(double Arr[ROWS]);
void MinValueIn(char Arr[ROWS]);

void MinValueIn(int Arr[ROWS][COLS]);
void MinValueIn(double Arr[ROWS][COLS]);
void MinValueIn(char Arr[ROWS][COLS]);

void MaxValueIn(int Arr[ROWS]);
void MaxValueIn(double Arr[ROWS]);
void MaxValueIn(char Arr[ROWS]);

void MaxValueIn(int Arr[ROWS][COLS]);
void MaxValueIn(double Arr[ROWS][COLS]);
void MaxValueIn(char Arr[ROWS][COLS]);
