#include <stdio.h>

int main3(void) {
	int floor;

	printf("�� ������ �װڽ��ϱ�?(5~100) ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int k = i; k < floor - 1; k++) {
			printf(" ");
		}

		for (int j = 0; j < i * 2 + 1; j++) {
			printf("*");
		}

		printf("\n");
	}

	// ����üũ

	/* for (int i = 0; i <= 5; i++) {
		for (int k = 4; k >= i; k--) {
			printf("*");
		}
		printf("\n");
	} */

	return 0;
}