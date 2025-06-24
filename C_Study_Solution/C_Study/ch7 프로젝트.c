#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void initData();
void printFish();
void decreaseWater(long elapsedTime);
int checkAlive();


int level;
int arrayFish[6];
int* cusor;

int main7a(void) {

	int num;
	long startTime = 0;
	long totalElapsedTime = 0;
	long prevElapsedTime = 0;

	initData();

	startTime = clock();
	cusor = arrayFish;

	while (1) {
		printFish();

		printf("��� ���׿� ���� �ٱ��?(1~6) ");
		scanf_s("%d", &num);

		if (num < 1 || num>6) {
			printf("\n�߸� �Է��߽��ϴ�.\n\n");
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� :  %ld��\n", totalElapsedTime);

		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld��\n", prevElapsedTime);

		decreaseWater(prevElapsedTime);

		if (cusor[num - 1] <= 0) {
			printf("%d�� ������ ������ �̹� �׾����Ƿ� ���� ���� �ʽ��ϴ�.\n", num);
		}
		else if (cusor[num - 1] + 1 <= 100) {
			printf("%d�� ���׿� ���� �ݴϴ�.\n\n", num);
			cusor[num - 1] += 1;
		}

		if (totalElapsedTime / 20 > level - 1) {
			level++;
			printf("*** �����մϴ�. %d�������� %d ������ �ö����ϴ�. ***\n\n", level - 1, level);

			if (level == 5) {
				printf("\n\n�����մϴ�. �ְ� ������ �޼��߽��ϴ�. ������ �����մϴ�\n\n");
				exit(0);
			}
		}

		if (checkAlive() == 0) {
			printf("��� ����Ⱑ �׾����ϴ�. \n\n");
			exit(0);
		}
		else {
			printf("����Ⱑ ���� ��� �־��!\n\n");
		}
	}
	return 0;
}


void initData() {

	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100;
	}
}

void printFish() {
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);

	for (int i = 0; i < 6; i++) {
		printf("  %3d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elapsedTime);

		if (arrayFish[i] < 0) {
			arrayFish[i] = 0;
		}
	}
}


int checkAlive() {
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0) {
			return 1;
		}
	}
	return 0;
}