# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <conio.h>
# include <string.h>
# define MAX 10000

int main(void) {

	char password[20];
	char c;
	int i = 0;
	char line[MAX];
	char contents[MAX] = "";

	printf("��� �ϱ⿡ ���� ���� ȯ���մϴ�.\n");
	printf("��й�ȣ�� �Է��ϼ���(�ִ� 20�ڸ�). : ");

	while (1) {
		c = _getch();

		if (c == 13) {
			password[i] = '\0';
			break;
		}
		else {
			printf("*");
			password[i] = c;
		}
		i++;
	}

	printf("\n\n === ��й�ȣ Ȯ�� �� ===\n\n");

	if (strcmp(password, "skehzheld") == 0) {
		printf("=== ��й�ȣ Ȯ�� �Ϸ� ===\n\n");

		char* fileName = "C:\\Users\\qqqls\\scretdiary.txt";

		FILE* file = fopen(fileName, "a + b");

		if (file == NULL) {
			printf("���� ���� ����");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL) {
			printf("%s", line);
		}

		printf("\n\n������ ��� �ۼ��ϼ���! �����Ϸ��� EXIT�� �Է��ϼ���.\n\n");

		while (1) {
			scanf("%[^\n]", contents);
			getchar();

			if (strcmp(contents, "EXIT") == 0) {
				printf("��� �ϱ� �Է��� �����մϴ�.\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file);
		}

		fclose(file);
	}
	else {
		printf("=== ��й�ȣ�� Ʋ�Ⱦ�� ===\n\n");
	}

	return 0;
}