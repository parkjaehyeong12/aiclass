//�Լ��� �̸� ������ �ڵ并ġ
//��ȯ��, �Ű�����

#include<stdio.h>
void enterKey()
{
	printf("\n");
}
void printfPower(int n)
{
	printf("%d", n * n);
}//�Ű������� ���� ���ڸ� �����ؼ� ���
int inputNum()
{
	int n;
	printf("���� �Է��ؿ�\n");
	scanf_s("%d", &n);
	return n; //�Լ��� ���(��ȯ��)�� n�̶��!!!!!!

}//���ڸ� �Է¹���

int PowerNum(int n, int p) //n�� ����, p�� ������
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
	printf("���� 2���� ���ؼ� �Է¹ް� ����غ�\n");

	return 0;
}