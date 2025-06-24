#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getRandom(int level);

void showQuest(int level, int num1, int num2);

void success();

void fail();

int main5A(void) {
	srand(time(NULL));

	int count = 0;

	for (int i = 1; i <= 5; i++) {
		int num1;
		int num2;

		num1 = getRandom(i);
		num2 = getRandom(i);

		showQuest(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);

		if (answer == -1) {
			printf("\n프로그램을 종료합니다.\n");
			exit(0);
		}
		else if (answer == num1 * num2) {
			success();
			count++;
		}
		else {
			fail();
		}
	}


	printf("\n\n비밀번호 %d개 맞췄습니다.\n", count);
	return 0;
}

int getRandom(int level) {

	return rand() % (level * 9) + 1;
}

void showQuest(int level, int num1, int num2) {
	printf("\n\n\n###### %d번째 비밀번호 ######\n", level);
	printf("\n\t%d * %d ? \n\n", num1, num2);
	printf("############################\n");
	printf("\n비밀번호를 입력하세요. (종료를 원하면 -1 입력) >> ");
}

void success() {
	printf("\n >> Good!\n");
}

void fail() {
	printf("\n >> 땡! 틀렸습니다.\n");
}