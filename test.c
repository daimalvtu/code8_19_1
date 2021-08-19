#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char arr[row][list] = {0};
	formgame(arr,row,list);
}
void test()
{
	int i = 0;
	do
	{
		printf("********继续游戏请输入1:>*******\n");
		printf("******结束游戏请按0:>**********\n");
		scanf("%d",&i);
		if (i == 1)
		{
			game();
		}
		else if (i == 0)
			break;
		else
			printf("*******错误输入，请重新输入**********\n");
	} while (i != 0);
}
int main()
{
	test();
	return 0;
}