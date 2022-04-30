#include <stdio.h>

void main17
() {
	//int num = 15;
	//if (num < 10) {
	//	printf("한자리 수 \n");
	//}
	//else if (num < 100) {
	//	printf("두자리 수 \n");
	//}
	//else if (num < 1000) {
	//	printf("세자리 수\n");
	//}
	//else {
	//	printf("그 외\n");
	//}
	
	//퀴즈4
	printf("=====퀴즈4=====\n");

	int age;
	printf("나이를 입력하세요>>>");
	scanf_s("%d", &age);
	 
	if (age > 0 && age < 200) {
		if (age >= 20) {
			printf("성인입니다.\n");
		}
		else if (age >= 14) {
			printf("청소년입니다.\n");
		}
		else {
			printf("어린이 입니다.\n") ;
		}
	}
	else {
		printf("띠용?\n");
	}

	//퀴즈5
	printf("=====퀴즈4=====\n");

	int year;
	printf("년도를 입력하세요>>>");
	scanf_s("%d", &year);

	int ampersand = year % 4;
	int ampersand1 = year % 100;
	int ampersand2 = year % 400;

	if (ampersand == 0 && ampersand1 != 0 ) {
		printf("%d년은 윤년입니다.\n", year);
	}
	else if (ampersand2 == 0) {
		printf("%d년은 윤년입니다.\n", year);
	}
	else {
		printf("%d년은 윤년이아닙니다. \n", year);
	}








}