#include<stdio.h>
//변수의 종류
//전역변수, 지역변수, 정적변수
//정적변수도 지역변수가 있고 전역변수가 있다
//전역변수는 함수 바깥에 선언하다.

int g = 0;
static int s1 = 0; //static 키워드가 붙음 (정적 변수)

void upnum(int a, int b) //a,b는 매개변수 =지역변수
{                        //즉 함수 끝나면 사라짐
	static int s2 = 0;   // s2는 a,b와 다르게 프로그램이
	a++;                 //끝나야 없어진다.
	b++;
	s2++;
	g++;
	printf("%d %d %d %d\n", a, b, g, s2);
}

int main()
{
	//지역변수는 함수나 중괄호 안에 선언함
	int num =  10;
	if (num > 0)
	{
		int n = 100; //변수 n은 양수여야 존재
		upnum(num, n);//a,b가 아무리 변화해도(복사본)
		upnum(num, n);//num, n은 그대로이다(원본)
		upnum(num, n);
		upnum(num, n);
		upnum(num, n);
		printf("n= % d, num = %d\n", n, num);
	}
	g++; //전역변수는 함수 어디에서든지 쓸 수 있다.
	printf("g=%d\n", g);
	//upnum(num,n)

	/* 전압과 정적변수(static) 의 차이 : 
	



	*/







	return 0;
}