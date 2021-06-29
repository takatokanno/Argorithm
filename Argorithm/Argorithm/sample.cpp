#define _CRT_SECURE_NO_WARNINGS
#include "sample.h"
#include <stdio.h>
#include <stdlib.h>
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

void dynamicMemoryAllocation()
{

	int* x;// int型のポインタ
	// ポインタとは？
	// アドレスの値を記憶することができる変数
	int a;
	x = &a;

	x = (int*)calloc(1, sizeof(int));	// int型のオブジェクトを生成

	if (x == NULL)
		puts("記憶域の確保に失敗しました");
	else {
		*x = 10;
		printf("*x =  %d\n", *x);
		printf("x =  %d\n", x);
		free(x);						// int型のオブジェクトを破棄
	}

}
