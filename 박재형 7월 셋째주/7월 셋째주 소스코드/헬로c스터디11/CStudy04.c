#include<stdio.h>
void findBig(int a, int b)
{
	if (a >= b)
	{
		printf("%d\n", a);
			return; //return이 나와서 강제종료가 된ㄷ.
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
	printf("숫자 두개입력");
	scanf_s("%d %d", &a, &b);

	a >= b ? printf("%d\n", a) : printf("%d\n", b);
	//삼항연산자 없이 하기
	if (a >= b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
	
	findBig(a, b); //더 큰 숫자를 출력
	//2
	int result = findBigReturn(a, b);
	printf("%d\n", result);


	return 0;
}