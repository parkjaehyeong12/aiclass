#include<stdio.h>
//������ ����
//��������, ��������, ��������
//���������� ���������� �ְ� ���������� �ִ�
//���������� �Լ� �ٱ��� �����ϴ�.

int g = 0;
static int s1 = 0; //static Ű���尡 ���� (���� ����)

void upnum(int a, int b) //a,b�� �Ű����� =��������
{                        //�� �Լ� ������ �����
	static int s2 = 0;   // s2�� a,b�� �ٸ��� ���α׷���
	a++;                 //������ ��������.
	b++;
	s2++;
	g++;
	printf("%d %d %d %d\n", a, b, g, s2);
}

int main()
{
	//���������� �Լ��� �߰�ȣ �ȿ� ������
	int num =  10;
	if (num > 0)
	{
		int n = 100; //���� n�� ������� ����
		upnum(num, n);//a,b�� �ƹ��� ��ȭ�ص�(���纻)
		upnum(num, n);//num, n�� �״���̴�(����)
		upnum(num, n);
		upnum(num, n);
		upnum(num, n);
		printf("n= % d, num = %d\n", n, num);
	}
	g++; //���������� �Լ� ��𿡼����� �� �� �ִ�.
	printf("g=%d\n", g);
	//upnum(num,n)

	/* ���а� ��������(static) �� ���� : 
	



	*/







	return 0;
}