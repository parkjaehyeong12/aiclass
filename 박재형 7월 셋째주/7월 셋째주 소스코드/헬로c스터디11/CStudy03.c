#include<stdio.h>
extern int a; //a�� ������ �����Ѵ�.
extern int b; 

void printnum(int); //�Լ��� ����

int main()
{
	// b++;
	// printf("%d"\n, b);
	// 
	// ���⼭ static�� ������ ������ �ȵȴ�.
	// CTest �ܿ��� ����� �� �� ����
	// �ڹ� ,c#, c++�� private���� ��

	a++;
	printf("%d\n", a);
	up_Print(); // ������� �� �ᵵ �ȴ�.
}

void printnum(int a)  //�Լ��� ����
{
	printf("\n%d", a);
}