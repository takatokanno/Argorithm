#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
//線形探索
//要素が直線状に並んだ配列からの探索は、
//目的とするキー値を持つ要素に出会うまで先頭から順に要素を走査する


int search(const int a[], int n, int key)
{
	int i = 0;
	while (1) {
		if (i == n)
			return -1;
		if (a[i] == key)
			return i;
		i++;
	}
}

int main()
{
	int i, nx, ky, idx;
	int* x;

	puts("線形探索");
	printf("要素数：");
	scanf("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++) {
		printf("x[%d]:", i);
		scanf("%d", &x[i]);
	}

	printf("探す値：");
	scanf("%d", &ky);

	idx = search(x, nx, ky);

	if (idx == -1)
		puts("探索に失敗しました。");
	else
		printf("%dはx[%d]にあります。\n", ky, idx);

	free(x);

	return 0;
}