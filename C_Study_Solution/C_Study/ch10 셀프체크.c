# include<stdio.h>
# define _CRT_SECURE_NO_WARNINGS
# include <string.h>

int main(void) {

	char str1[256]="";
	char str2[256]="";
	char str3[256]="";

	FILE* file = fopen("C:\\USERS\\qqqlsm\\word.txt", "rb");

	if (file == NULL) {
		printf("���� ���� ����\n");
		return 1;
	}

	for (int i = 0; i < 3; i++) {

		(void)fscanf(file, "%s %s", str1, str2);
		printf("'%s'(��)fksms ���� ���� ���� �ܾ��? ", str2);

	}

	return 0;
}