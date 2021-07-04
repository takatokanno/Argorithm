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
		int b = scanf("%d", &a[i]);
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
		free(x);						// int型のオブジェクトを破棄
	}

}

//------------------------------------------------------------------------------
// 配列を動的生成するサンプル
//------------------------------------------------------------------------------
void dynamicArraySample()
{
	int i;
	int* a;	// 配列の先頭要素
	int na;	// 配列aの要素数

	printf("要素数：");
	scanf("%d", &na);

	a = (int*)calloc(na, sizeof(int)); // 要素数naのint型配列を生成
	//a = (int*)malloc(na*sizeof(int)); // 要素数naのint型配列を生成
	//int* b = (int*)realloc(a, na * sizeof(int)*100);

	if (a == NULL)
	{
		puts("記憶域の確保に失敗しました");
	}
	else {
		printf("%d個の整数を入力してください。\n", na);
		for (i = 0; i < na; i++) {
			printf("a[%d]:", i);
			scanf("%d", &a[i]);
		}

		printf("各要素の値は以下のとおりです。\n");

		for (i = 0; i < na; i++) {
			printf("a[%d] = %d\n", i, a[i]);
		}
		free(a);//要素数naのint型配列を破棄
	}
}


