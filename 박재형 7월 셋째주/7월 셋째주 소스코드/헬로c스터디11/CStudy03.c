#include<stdio.h>
extern int a; //a란 변수를 선언한다.
extern int b; 

void printnum(int); //함수의 원형

int main()
{
	// b++;
	// printf("%d"\n, b);
	// 
	// 여기서 static이 붙으면 실행이 안된다.
	// CTest 외에선 사용이 될 수 없음
	// 자바 ,c#, c++의 private같은 것

	a++;
	printf("%d\n", a);
	up_Print(); // 헤더파일 안 써도 된다.
}

void printnum(int a)  //함수의 정의
{
	printf("\n%d", a);
}