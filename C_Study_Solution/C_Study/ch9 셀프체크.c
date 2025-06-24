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
		{1, "C 입문편", 1},
		{ 2, "파이썬 기본편", 1},
		{ 3, "자바 기본편" , 1},
		{ 4, "파이썬 중급편", 1}
	};

	int input;

	while (1) {

		print_books(bookArray);


		printf("대출/반납할 책 번호를 입력해주세요(종료 -1) : ");
		scanf_s("%d", &input);

		if (input == -1) {
			printf("프로그램을 종료합니다.\n\n");
			break;
		}

		if (input < 1 || input>4) {
			printf("잘못된 입력입니다.\n\n");
			continue;
		}

		input -= 1;

		if (bookArray[input].available == 0) {
			printf("'%s' 반납이 완료됐습니다.\n\n", bookArray[input].title);
			bookArray[input].available = 1;
		}
		else {
			printf("'%s' 대출이 완료됐습니다.\n\n", bookArray[input].title);
			bookArray[input].available = 0;
		}

	}

	return 0;
}


void print_books(struct book* bookArray) {
	char* available = "대출 가능";
	char* unavailable = "대출 중";

	printf("전체 도서 목록입니다.\n");
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