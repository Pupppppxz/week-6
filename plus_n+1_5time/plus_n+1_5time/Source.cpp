#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fivetime(int result)
{
	int *mmm;
	mmm = &result;
	printf("Result = %d", *mmm);
	return result;
}
int main()
{
	int num;
	printf("Enter the positive interger : ");
	scanf("%d", &num);
	int number = num + 1,result=num;
	for (int i = 0; i < 5; i++)
	{
		result += number;
		number++;
	}
	fivetime(result);
	return 0;
}