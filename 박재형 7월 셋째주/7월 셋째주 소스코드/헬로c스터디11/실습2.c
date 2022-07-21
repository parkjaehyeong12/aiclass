#include<stdio.h>
void one(int a, int b)
{
	if (a > b)
	{
		printf("%d가 더 크다.\n", a);
	}
	else if (a < b)
	{
		printf("%d가 더 크다.\n", b);
	}
	else
		printf("두 수는 같다.\n");

}

int two(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else if (a < b)
	{
		return b;
	}
	else
	    return -1;
}

void three(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	////1번
	//int m, n;
	//printf("두 수를 입력하세요 ");
	//scanf_s("%d %d", &m, &n);
	//one(m, n);

	////2번
	//
	//printf("두 수를 입력하시오 ");
	//scanf_s("%d %d", &m, &n);
	//int result = two(m, n);
	//printf("%d\n", result);
	//
	//3번
	int m, n;
	printf("바꿔줄 두 수를 입력하세요 ");
	scanf_s("%d %d", &m, &n);
	int* alpha = &m;
	int* beta = &n;
	
	three(alpha, beta);

	printf("%d %d", m, n);

	return 0;
}