#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "sample.h"


int main()
{
	int i;
	int* height;
	int number;

	printf("人数：");
	scanf("%d", &number);

	height = (int*)calloc(number, sizeof(int));

	srand(time(NULL));
	for (i = 0; i < number; i++)
	{
		height[i] = 100 + rand() % 90;
		printf("height[%d] =%d\n", i, height[i]);
	}

	printf("最大値は%dです。\n", maxof(height, number));


	free(height);


	return 0;
}

