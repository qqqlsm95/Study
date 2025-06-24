#include <stdio.h>

void square(int* a);


int main7B(void) {

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++) {
		square(&arr[i]);
	}

	for (int j = 0; j < 10; j++) {
		printf("%d", arr[j]);
		if (j + 1 < 10) {
			printf(", ");
		}
	}

	return 0;
}


void square(int* a) {

	int value = *a;

	if (value % 2 == 0) {
		*a = value * value;
	}
	else {
		*a = value;
	}
}