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

	// 중복 방지
	srand(time(NULL));

	// 번호 6개 뽑은 후 오름차순 정렬
	random(randomNum);
	sort(randomNum);

	// 당첨 번호와 중복되지 않은 보너스번호 
	int bonusNum = rand() % 45 + 1;

	for (int i = 0; i < 6; i++) {
		if (randomNum[i] == bonusNum) {
			bonusNum = rand() % 45 + 1;
			i = 0;
		}
	}

	// 내 번호 생성
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

	printf("내 번호  :  ");

	for (int i = 0; i < 6; i++) {
		printf("%2d ", myNum[i]);
	}
	printf("\n");

	// 당첨 확인
	int cnt = 0;
	int isBonus = 0;
	printf("당첨 번호 : ");
	for (int i = 0; i < 6; i++) {
		printf("%2d ", randomNum[i]);
	}
	printf("\n보너스 : %2d", bonusNum);
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
			printf("보너스 번호 일치\n");
		}
	}

	printf("%d개 일치\n", cnt);

	switch (cnt)
	{
	case 3:
		printf("5등\n");
		break;
	case 4:
		printf("4등\n");
		break;
	case 5:
		if (isBonus == 0) {
			printf("3등\n");
		}
		else {
			printf("2등\n");
		}
		break;
	case 6:
		printf("1등\n");
	case 1:
	case 2:
	default:
		printf("꽝\n");
		break;
	}

	return 0;
}