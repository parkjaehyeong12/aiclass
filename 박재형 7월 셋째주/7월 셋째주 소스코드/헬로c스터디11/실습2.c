#include<stdio.h>
void one(int a, int b)
{
	if (a > b)
	{
		printf("%d�� �� ũ��.\n", a);
	}
	else if (a < b)
	{
		printf("%d�� �� ũ��.\n", b);
	}
	else
		printf("�� ���� ����.\n");

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
	////1��
	//int m, n;
	//printf("�� ���� �Է��ϼ��� ");
	//scanf_s("%d %d", &m, &n);
	//one(m, n);

	////2��
	//
	//printf("�� ���� �Է��Ͻÿ� ");
	//scanf_s("%d %d", &m, &n);
	//int result = two(m, n);
	//printf("%d\n", result);
	//
	//3��
	int m, n;
	printf("�ٲ��� �� ���� �Է��ϼ��� ");
	scanf_s("%d %d", &m, &n);
	int* alpha = &m;
	int* beta = &n;
	
	three(alpha, beta);

	printf("%d %d", m, n);

	return 0;
}