////atoi    将一个字符串转化为一个整型
//#include<stdio.h>
//#include<assert.h>
//#include<limits.h>
//#include<ctype.h>
//enum state
//{
//	Value,
//	ErrValue
//};
//state statue = ErrValue;
//int my_atoi(const char* str)
//{
//	assert(str);
//
//	char* p = (char*)str;
//
//	long long n = 0;
//	int flag = 1;
//	//字符串长度为0
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	//字符串前面有很多空格
//	while (*p == ' ')
//	{
//		p++;
//	}
//	//判断符号
//	if (*p == '+')
//	{
//		flag = 1;
//		p++;
//	}
//	else if (*p == '-')
//	{
//		flag = -1;
//		p++;
//	}
//	//开始计算
//	while (*p != '\0')
//	{
//		if (isdigit(*p))
//		{
//			n = n * 10 + flag * (*p - '0');
//			if (n > INT_MAX)
//			{
//				n = INT_MAX;
//				break;
//			}
//			else if (n < INT_MIN)
//			{
//				n = INT_MIN;
//				break;
//			}
//		}
//		else
//		{
//			break;
//		}
//		p++;
//	}
//
//	if (*p == '\0')
//	{
//		statue = Value;
//	}
//
//	return (int)n;
//}
//int main()
//{
//	char arr[] = "12345678";
//	int m = my_atoi(arr);
//	if (statue == Value)
//	{
//		printf("%d\n", m);
//	}
//	if (statue == ErrValue)
//	{
//		printf("非法转化\n");
//	}
//
//	return 0;
//}