//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	char a[] = "****A*BC*DEF*G******";
//	char b[99];
//	int key = 0;
//	int m = 0;
//	for (int i = 0;i <= strlen(a);i++)
//	{
//		if (key != 0)
//		{
//			if (a[i] == '*')
//			{
//				continue;
//			}
//			else
//			{
//				b[m] = a[i];
//				m++;
//			}
//		}
//		else
//		{
//			if (a[i] != '*')
//			{
//				key++;
//			}
//			b[m] = a[i];
//			m++;
//		}
//	}
//	printf("%s", b);
//	return 0;
//}