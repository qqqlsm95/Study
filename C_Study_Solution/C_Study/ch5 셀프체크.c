#include <stdio.h>

void convert_time(int minute);

int main5B(void) {

	int minute = 0;

	printf("\n ���� �Է��� �ּ��� >>> ");

	scanf_s("%d", &minute);

	convert_time(minute);

	return 0;
}

void convert_time(int minute) {

	printf("\n %d�ð� %d��\n", minute / 60, minute % 60);

}