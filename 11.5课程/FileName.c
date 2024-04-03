#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int a = 0;
//	int b = 20;
//	printf("%p\n", &a);//内存的使用先使用高地址再使用低地址（高地址
//	printf("%p\n", &b);//低地址
//	return 0;
//}
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;//死递归
//}
//int fact(int x)
//{
//	if (x > 0)
//	{
//		return x * fact(x - 1);
//	}
//	else if (x == 0)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int b = fact(n);
//	printf("%d", b);
//	return 0;
//}
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x% 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	return 0;
//}
//int count = 0;
//int fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int b = fib(n);
//	printf("%d\n", b);
//	printf("count=%d\n",count);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int n = 0;
//	int fib = 0;
//	scanf("%d", &n);
//	for (int a = 1;a <= n - 2;a++)
//	{
//		fib = i + j;
//		i = j;
//		j = fib;
//	}
//	printf("%d", fib);
//	return 0;
//}
//int main()
//{
//	int a, b = 1;
//	int c = 0;
//
//	return 0;
//}
//int main()
//{
//	int a = 023;
//	printf("%d ", a);//以十进制的形式来打印有符号的整数
//	int b = 0x18;
//	printf("%d ", b);
//	return 0;
//}
//int main()
//{
//	
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int j = 1;
//		int i = 1;	
//		int fib = 0;
//		if (n<=2)
//		{
//			printf("%d", i);
//		}
//		if (n > 2)
//		{
//			for (int a = 1;a <= n - 2;a++)
//			{
//				fib = i + j;
//				i = j;
//				j = fib;
//			}
//			printf("%d", fib);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int sq(int x, int y)
//{
//	if (y == 0)
//	{
//		return 1;
//	}
//	if (y > 0)
//	{
//		return x*sq(x, y - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int square = sq(n, k);
//	printf("%d", square);
//	return 0;
//}
//int sum = 0;
//void DigitSum(int x)
//{
//	if (x > 9)
//	{
//		DigitSum(x / 10);
//	}
//	printf("%d ", x % 10);
//	sum = sum + x % 10;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	DigitSum(n);
//	printf("\n");
//	printf("%d", sum);
//	return 0;
//}
//int prime(int x)
//{
//	if (x == 0)
//	{
//		x = 1;
//	}
//	else if (x > 0)
//	{
//		return prime(x - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int p=prime(n);
//	printf("%d", p);
//	return 0;
//}
//int prime(int x)
//{
//	if (x == 0)
//	{
//		return 1;
//	}
//	else if (x >= 1)
//	{
//		return x * prime(x - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = prime(n);
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 1;
//	scanf("%d", &n);
//	while (n > 0)
//	{
//		i = n * i;
//		n--;
//		
//	}
//	printf("%d", i);
//	return 0;
//}