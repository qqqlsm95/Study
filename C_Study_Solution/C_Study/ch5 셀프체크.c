#include <stdio.h>

void convert_time(int minute);

int main5B(void) {

	int minute = 0;

	printf("\n 분을 입력해 주세요 >>> ");

	scanf_s("%d", &minute);

	convert_time(minute);

	return 0;
}

void convert_time(int minute) {

	printf("\n %d시간 %d분\n", minute / 60, minute % 60);

}