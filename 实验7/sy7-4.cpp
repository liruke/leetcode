////atoi    ��һ���ַ���ת��Ϊһ������
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
//	//�ַ�������Ϊ0
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	//�ַ���ǰ���кܶ�ո�
//	while (*p == ' ')
//	{
//		p++;
//	}
//	//�жϷ���
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
//	//��ʼ����
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
//		printf("�Ƿ�ת��\n");
//	}
//
//	return 0;
//}