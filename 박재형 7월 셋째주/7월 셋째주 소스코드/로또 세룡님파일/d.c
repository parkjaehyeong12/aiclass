#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int sort(int num[]) {
	int res[6] = { 0 };
	int temp;

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
		res[i] = num[i];
	}
	return res;
}

int random(int num[]) {
	num[6];

	for (int i = 0; i < 6; i++) {
		num[i] = rand() % 45 + 1;
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j]) {
				i--;
				break;
			}
		}
	}
	return num;
}

int main() {
	int randomNum[6] = { 0 };
	int myNum[6] = { 0 };

	// �ߺ� ����
	srand(time(NULL));

	// ��ȣ 6�� ���� �� �������� ����
	random(randomNum);
	sort(randomNum);

	// ��÷ ��ȣ�� �ߺ����� ���� ���ʽ���ȣ 
	int bonusNum = rand() % 45 + 1;

	for (int i = 0; i < 6; i++) {
		if (randomNum[i] == bonusNum) {
			bonusNum = rand() % 45 + 1;
			i = 0;
		}
	}

	// �� ��ȣ ����
	random(myNum);

	int oddCnt = 0;
	int evenCnt = 0;
	for (int i = 0; i < 6; i++) {
		if (myNum[i] % 2 == 0) {
			evenCnt++;
		}
		else {
			oddCnt++;
		}

		if (evenCnt > 5 || oddCnt > 5) {
			random(myNum);
		}
	}

	sort(myNum);

	printf("�� ��ȣ  :  ");

	for (int i = 0; i < 6; i++) {
		printf("%2d ", myNum[i]);
	}
	printf("\n");

	// ��÷ Ȯ��
	int cnt = 0;
	int isBonus = 0;
	printf("��÷ ��ȣ : ");
	for (int i = 0; i < 6; i++) {
		printf("%2d ", randomNum[i]);
	}
	printf("\n���ʽ� : %2d", bonusNum);
	printf("\n");

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (randomNum[j] == myNum[i]) {
				cnt++;
			}
			else {
				continue;
			}
		}
		if (myNum[i] == bonusNum) {
			isBonus = 1;
			printf("���ʽ� ��ȣ ��ġ\n");
		}
	}

	printf("%d�� ��ġ\n", cnt);

	switch (cnt)
	{
	case 3:
		printf("5��\n");
		break;
	case 4:
		printf("4��\n");
		break;
	case 5:
		if (isBonus == 0) {
			printf("3��\n");
		}
		else {
			printf("2��\n");
		}
		break;
	case 6:
		printf("1��\n");
	case 1:
	case 2:
	default:
		printf("��\n");
		break;
	}

	return 0;
}