#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main6A(void) {
	int treatment = rand() % 4;
	int cntShowBottle = 0;
	int preCntShowBottle = 0;
	int answer;

	srand(time(NULL));

	printf("\n\n === �ڶ󳪶� �Ӹ�ī�� ���� === \n\n");


	for (int i = 1; i <= 3; i++) {

		int bottle[4] = { 0, 0, 0, 0 };

		do {
			cntShowBottle = rand() % 2 + 2;
		} while (cntShowBottle == preCntShowBottle);

		preCntShowBottle = cntShowBottle;
		printf(" > %d��° �׽�Ʈ : ", i);

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

		printf("�� ������ �Ӹ��� �ٸ��ϴ�.\n\n");

		if (isIncluded == 1) {
			printf(">> ����!!\n");
		}
		else {
			printf(">> ���ФФ�\n");
		}

		printf("\n  ����Ϸ��� Enter�� ��������.  \n");
		(void)getchar();
	}

	printf("\n\n�߸����� ����ϱ��? ");

	scanf_s("%d", &answer);

	if (answer == treatment + 1) {
		printf("\n\n>>> �����Դϴ�.!!");
	}
	else {
		printf("\n\n>>> Ʋ�Ƚ��ϴ�.�Ф�");
		printf("\n ������ %d �� �̿����ϴ�.", treatment + 1);
	}

	return 0;

}