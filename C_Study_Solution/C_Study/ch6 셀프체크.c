#include <stdio.h>

int main6b(void) {

	int score[5] = { 0, 0, 0, 0, 0 };
	int total = 0;
	double average = 0;

	for (int i = 0; i < 5; i++) {
		printf("%d번째 과목 점수를 입력해 주세요(과목5개)>> ", i + 1);
		scanf_s("%d", &score[i]);
		total += score[i];

		if (i == 4) {
			printf("\n >>> 감사합니다!!");
		}
		else {
			printf(">>> 계속 다음 과목 점수를 입력 해주세요\n\n");
		}
	}
	average = total / 5.0;

	printf("\n\n총점은 %d점, 평균은 %.1lf점 입니다.", total, average);

	return 0;
}
