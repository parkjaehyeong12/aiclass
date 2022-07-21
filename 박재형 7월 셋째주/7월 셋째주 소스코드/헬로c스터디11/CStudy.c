//함수는 미리 만들어둔 코드뭉치
//반환형, 매개변수

#include<stdio.h>
void enterKey()
{
	printf("\n");
}
void printfPower(int n)
{
	printf("%d", n * n);
}//매개변수로 받은 숫자를 제곱해서 출력
int inputNum()
{
	int n;
	printf("숫자 입력해요\n");
	scanf_s("%d", &n);
	return n; //함수의 결과(반환값)가 n이라고!!!!!!

}//숫자를 입력받음

int PowerNum(int n, int p) //n은 숫자, p는 제곱수
{
	if (p == 0)
		return 1;
	else if (p == 1)
		return n;
	else {
		for (int i = 0; i < p-1; i++)
			n *= n;
	}
	return n;
}

int main()
{
	int num = inputNum();
	printfPower(num);
	enterKey();
	printPower(inputNum());
	enterKey();
	printf("숫자 2개에 대해서 입력받고 출력해봄\n");

	return 0;
}