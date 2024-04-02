//#include<iostream>
//using namespace std;
//unsigned int fun(unsigned int w)
//{
//	int count = 0;
//	int n = w;
//	while (n != 0)
//	{
//		count++;
//		n /= 10;
//	}
//	int sum = 0;
//	int j = 1;
//	for (int i = 1;i < count;i++)
//	{
//		sum += w % 10 * j;
//		j *= 10;
//		w /= 10;
//	}
//	return sum;
//}
//
//int main()
//{
//	unsigned int x;
//	printf("Enter a unsigned integer number : ");
//	cin >> x;
//	printf("The original data is : %d\n", x);
//	if (x < 10)
//	{
//		printf("Data error !");
//	}
//	else
//	{
//		printf("The result : %d\n", fun(x));
//	}
//	return 0;
//}