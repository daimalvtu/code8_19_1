#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void formgame(char arr[row][list],int row,int list)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < list; i++)
		{
			if (j = list - 1)
			{
				printf("  ");
				break;
			}
			printf("  |\n");
			if (i = row - 1)
			{
				printf("--\n");
				break;
			}
		}
	}
}
