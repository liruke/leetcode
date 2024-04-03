#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;//越界了(这个程序会崩掉吗？)
		printf("hehe\n");
	}//程序运行之后是死循环
	return 0;
}