#ifndef  __SAOLEI_H__
#define __SAOLEI_H__
//#pragma once//预防头文件重复引用
#include<stdio.h>

#define ROW 9
#define COL 9

char** creatMat(int row, int col);
void initMat(char** Mat, int row, int col, char ch);
void setMine(char** Mat, int row, int col);
void showMat(char** Mat, int row, int col);
int getMineNum(char** Mat, int row, int col, int x, int y);
void game(char** mineMat, char** mineInfo, int row, int col);

#endif