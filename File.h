#pragma once
#include<stdio.h>
#include <iostream>
#include<string>
#include"matrix.h"
using namespace std;


void fileReadGNSS(int& LineNum, int* start, int* final, double* dX, double* dY, double* dZ);//���ļ�
int find_PointNum(int LineNum, int* start, int* final);//�ҵ����ĵ�
void Construct_B_Matrix(Matrix &B, int LineNums, int B_cols, int* start, int* final);//����B����
void Construct_L_Matrix(Matrix &L, int LineNums, double* dX, double* dY, double* dZ);//����L����
void filesaveGNSS(int LineNum, Matrix LL, int* start, int* final);