# include<stdio.h>
# define _CRT_SECURE_NO_WARNINGS
# include <string.h>

int main(void) {

	char str1[256]="";
	char str2[256]="";
	char str3[256]="";

	FILE* file = fopen("C:\\USERS\\qqqlsm\\word.txt", "rb");

	if (file == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}

	for (int i = 0; i < 3; i++) {

		(void)fscanf(file, "%s %s", str1, str2);
		printf("'%s'(이)fksms 뜻을 가진 영어 단어는? ", str2);

	}

	return 0;
}