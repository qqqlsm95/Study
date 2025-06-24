# include <stdio.h>

struct book {
	int id;
	char* title;
	int available;
};

void print_books(struct book* bookArray);

int main(void) {
	typedef struct book Book;

	Book bookArray[4] = {
		{1, "C �Թ���", 1},
		{ 2, "���̽� �⺻��", 1},
		{ 3, "�ڹ� �⺻��" , 1},
		{ 4, "���̽� �߱���", 1}
	};

	int input;

	while (1) {

		print_books(bookArray);


		printf("����/�ݳ��� å ��ȣ�� �Է����ּ���(���� -1) : ");
		scanf_s("%d", &input);

		if (input == -1) {
			printf("���α׷��� �����մϴ�.\n\n");
			break;
		}

		if (input < 1 || input>4) {
			printf("�߸��� �Է��Դϴ�.\n\n");
			continue;
		}

		input -= 1;

		if (bookArray[input].available == 0) {
			printf("'%s' �ݳ��� �Ϸ�ƽ��ϴ�.\n\n", bookArray[input].title);
			bookArray[input].available = 1;
		}
		else {
			printf("'%s' ������ �Ϸ�ƽ��ϴ�.\n\n", bookArray[input].title);
			bookArray[input].available = 0;
		}

	}

	return 0;
}


void print_books(struct book* bookArray) {
	char* available = "���� ����";
	char* unavailable = "���� ��";

	printf("��ü ���� ����Դϴ�.\n");
	printf("==============================================\n");

	for (int i = 0; i < 4; i++) {
		printf(" % d. % -16s", bookArray[i].id, bookArray[i].title);

		if (bookArray[i].available) {
			printf("[%s]\n", available);
		}
		else {
			printf("[%s]\n", unavailable);
		}
	}

	printf("==============================================\n");
}