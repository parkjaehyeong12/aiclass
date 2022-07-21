#include<stdio.h>
int main()
{
	//atoi를 하는 방법!
	char c[9];
	gets(c);
	printf("%s", c);
	int num = 0;
	num = atoi(c);
	printf("\n%d\n", c);

	return 0;
}