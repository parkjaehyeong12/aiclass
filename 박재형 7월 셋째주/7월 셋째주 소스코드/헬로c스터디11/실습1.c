#include<stdio.h>
void one()
{
	printf("1-1\n");
}
void two(int n)
{
	printf("%d\n", n * n * n);
}
int three()
{
	int a;
	printf("���� �ϳ� �Է��Ͻÿ�\n");
	scanf_s("%d", &a);
	return a;
}
int four(int n)
{
	int what = n * n;
	printf("%d", what);
	return what;
}
void printfNumber(int n, int p)
{
	printf("���� n�� p�� %d, %d�Դϴ�.", n, p);
}


int main()
{
	//1
	one();
	three();
	two(three());
	four(three());
	return 0;
	printf("\n");

	//2
	int n, p;
	printf("���� n�� p�� �Է��Ͻÿ� ");
	printfNumber(n, p);

	//3
    
}