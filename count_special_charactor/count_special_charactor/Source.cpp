#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
void result(int num)
{
	int *dd;
	dd = &num;
	printf("Number of special charactor : %d", *dd);
}
int main()
{
	char str[100];
	int count,num = 0;
	printf("Enter the sentence : ");
	scanf("%s", &str);
	count = strlen(str);
	if (count >= 1)
	{
		for (int i = 0; i < count; i++)
		{
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
			{
				num;
			}
			else {
				num += 1;
			}
		}
	}
	result(num);
	return 0;
}