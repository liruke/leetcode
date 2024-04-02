#include<iostream>
using namespace std;
void fun(char* s, int n)
{
	int i = 0;
	while (s[i] != '/0')
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			for (int j = n;j >= i;j--)
			{
				s[j + 1] = s[j];
			}
			s[i] = '$';
		}
		i++;
	}
}
int main()
{
	char s[100] = "A1B23CD45";
	int length = strlen(s) + 1;
	fun(s, length);
	cout << s;
	return 0;
}