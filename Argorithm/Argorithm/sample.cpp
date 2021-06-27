﻿#define _CRT_SECURE_NO_WARNINGS
#include "sample.h"
#include <stdio.h>

#define N 5

void setupArraySample00()
{
	int a[N];

	for (int i = 0; i < N; i++)
	{
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}

	puts("各要素の値");
	for (int i = 0; i < N; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}

	int b = maxof(a, N);

}

//------------------------------------------------------------------------------
// 配列の中にある数値の最大値を求める関数
// a[]: 求める配列
// n : 配列の数
//------------------------------------------------------------------------------
int maxof(const int a[], int n)
{
	int i;
	int max = a[0];

	for (i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];

	return max;
}