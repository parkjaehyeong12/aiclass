#include<stdio.h>
void findBig(int a, int b)
{
	if (a >= b)
	{
		printf("%d\n", a);
			return; //return�� ���ͼ� �������ᰡ �Ȥ�.
	}
	printf("%d\n", b);
}
int findBigReturn(int a, int b)
{
	if (a >= b)
		return a;
	return b;
}

int main()
{
	//1
	int a, b;
	printf("���� �ΰ��Է�");
	scanf_s("%d %d", &a, &b);

	a >= b ? printf("%d\n", a) : printf("%d\n", b);
	//���׿����� ���� �ϱ�
	if (a >= b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
	
	findBig(a, b); //�� ū ���ڸ� ���
	//2
	int result = findBigReturn(a, b);
	printf("%d\n", result);


	return 0;
}