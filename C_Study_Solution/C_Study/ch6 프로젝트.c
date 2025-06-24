#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main6A(void) {
	int treatment = rand() % 4;
	int cntShowBottle = 0;
	int preCntShowBottle = 0;
	int answer;

	srand(time(NULL));

	printf("\n\n === 자라나라 머리카락 게임 === \n\n");


	for (int i = 1; i <= 3; i++) {

		int bottle[4] = { 0, 0, 0, 0 };

		do {
			cntShowBottle = rand() % 2 + 2;
		} while (cntShowBottle == preCntShowBottle);

		preCntShowBottle = cntShowBottle;
		printf(" > %d번째 테스트 : ", i);

		int isIncluded = 0;

		for (int j = 0; j < cntShowBottle; j++) {

			int randBottle = rand() % 4;

			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;

				if (randBottle == treatment) {
					isIncluded = 1;
				}
			}
			else {
				j--;
			}
		}

		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1) {
				printf("%d", k + 1);
			}
		}

		printf("번 물약을 머리에 바릅니다.\n\n");

		if (isIncluded == 1) {
			printf(">> 성공!!\n");
		}
		else {
			printf(">> 실패ㅠㅠ\n");
		}

		printf("\n  계속하려면 Enter를 누르세요.  \n");
		(void)getchar();
	}

	printf("\n\n발모제는 몇번일까요? ");

	scanf_s("%d", &answer);

	if (answer == treatment + 1) {
		printf("\n\n>>> 정답입니다.!!");
	}
	else {
		printf("\n\n>>> 틀렸습니다.ㅠㅠ");
		printf("\n 정답은 %d 번 이였습니다.", treatment + 1);
	}

	return 0;

}