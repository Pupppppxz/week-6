#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int sum(int count)
{
int *cc;
cc = &count;
printf("Number of charactor : %d\n", *cc);
return 0;
}
int main()
{
	char a[100],tmp;
	printf("Enter Charactor(a-z) : ");
	scanf("%s", &a);
	int count = strlen(a);
	if (a != NULL) {
		for (int j = 0; j < count - 1; j++){
			for (int i = 0; i < count - 1; i++)
			{
				if (a[i] >= a[i + 1])
				{
					tmp = a[i];
					a[i] = a[i + 1];
					a[i + 1] = tmp;
				}
			}
		}
	}
	sum(count);
	printf("Sort result : %s\n", a);
	return 0;
}