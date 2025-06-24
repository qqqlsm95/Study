#include <stdio.h>

int main2a(void) {
	char name[256], what[256];
	int age;
	float weight;
	double height;

	printf("이름은 무엇인가요? ");
	scanf_s("%s", name, sizeof(name));

	printf("몇 살 이에요? ");
	scanf_s("%d", &age);

	printf("몸무게는 몇 kg이에요? ");
	scanf_s("%f", &weight);

	printf("키는 몇 cm예요? ");
	scanf_s("%lf", &height);

	printf("어떤 범죄를 저질렀어요? ");
	scanf_s("%s", what, sizeof(what));

	// 조서출력

	printf("\n\n--- 범죄자 정보 ---\n");
	printf("이름   : %s\n", name);
	printf("나이   : %d\n", age);
	printf("몸무게 : %.1f\n", weight);
	printf("키     : %.1lf\n", height);
	printf("범죄명 : %s", what);

	return 0;
}