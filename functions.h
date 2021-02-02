#pragma once
#include<iostream>

using namespace std;

const int n = 10;
const int ROWS = 8;
const int COLS = 10;

template <typename T> void Sort(T arr[], const int n);
template <typename T> void Sort(T arr[ROWS][COLS], const int m, const int n);
