#include <stdio.h>

void main9() {
	//출력  printf
	//입력 scanf_s

	int num1;
	float num2;
	char c;
	char cc[256];

	printf("숫자를 입력하세요>>>");
	scanf_s("%d", &num1);          //입력
	printf("num1에 들어간 값은 %d\n", num1);

	printf("실수를 입력하세요>>>");
	scanf_s("%f", &num2);          
	printf("num2에 들어간 값은 %f\n", num2);


	printf("문자를 입력하세요>>>");
	getchar();
	scanf_s("%c", &c , sizeof(c));
	printf("문자는 %c\n", c);

	printf("문자열을 입력하세요>>>");
	scanf_s("%s", &cc, 256);
	printf("문장려에 들어간 값은 %s\n", cc);
} 