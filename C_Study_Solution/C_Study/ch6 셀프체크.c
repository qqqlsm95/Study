#include <stdio.h>

int main6b(void) {

	int score[5] = { 0, 0, 0, 0, 0 };
	int total = 0;
	double average = 0;

	for (int i = 0; i < 5; i++) {
		printf("%d��° ���� ������ �Է��� �ּ���(����5��)>> ", i + 1);
		scanf_s("%d", &score[i]);
		total += score[i];

		if (i == 4) {
			printf("\n >>> �����մϴ�!!");
		}
		else {
			printf(">>> ��� ���� ���� ������ �Է� ���ּ���\n\n");
		}
	}
	average = total / 5.0;

	printf("\n\n������ %d��, ����� %.1lf�� �Դϴ�.", total, average);

	return 0;
}
