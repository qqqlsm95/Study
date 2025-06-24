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

		printf("몇번 어항에 물을 줄까요?(1~6) ");
		scanf_s("%d", &num);

		if (num < 1 || num>6) {
			printf("\n잘못 입력했습니다.\n\n");
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 :  %ld초\n", totalElapsedTime);

		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld초\n", prevElapsedTime);

		decreaseWater(prevElapsedTime);

		if (cusor[num - 1] <= 0) {
			printf("%d번 어항의 물고기는 이미 죽었으므로 물을 주지 않습니다.\n", num);
		}
		else if (cusor[num - 1] + 1 <= 100) {
			printf("%d번 어항에 물을 줍니다.\n\n", num);
			cusor[num - 1] += 1;
		}

		if (totalElapsedTime / 20 > level - 1) {
			level++;
			printf("*** 축하합니다. %d레벨에서 %d 레벨로 올랐습니다. ***\n\n", level - 1, level);

			if (level == 5) {
				printf("\n\n축하합니다. 최고 레벨을 달성했습니다. 게임을 종료합니다\n\n");
				exit(0);
			}
		}

		if (checkAlive() == 0) {
			printf("모든 물고기가 죽었습니다. \n\n");
			exit(0);
		}
		else {
			printf("물고기가 아직 살아 있어요!\n\n");
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
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);

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