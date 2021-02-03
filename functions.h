#pragma once
#include<iostream>

using namespace std;

const int n = 10;
const int ROWS = 8;
const int COLS = 10;

template <typename T> void Sort(T arr[], const int n);
template <typename T> void Sort(T arr[ROWS][COLS], const int m, const int n);

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int m, const int n);
void FillRand(double arr[ROWS][COLS], const int m, const int n);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);
void Print(double arr[ROWS][COLS], const int m, const int n);


