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
	printf("숫자 하나 입력하시오\n");
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
	printf("숫자 n과 p은 %d, %d입니다.", n, p);
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
	printf("숫자 n과 p을 입력하시오 ");
	printfNumber(n, p);

	//3
    
}