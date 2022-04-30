#include <stdio.h>

void main16() {

	//int age = -1;
	//scanf_s("%d", &age);
	//if (age >= 20) {
	//	printf("성인입니다 \n");      //조건이 맞으면 수행하는 부분 :  if 중괄호 내부

	//}
	//else {
	//	printf("미성년자입니다.");       //조건이 틀리면 수행하는 부분 :  else 중괄호 내부
	//}                                           //여기서 if와 else는 하나의 세트이다. if를 두 번 쓰는 것보다 효율이 좋다  
	//


	//int value = 15;
	//if (value > 10) {
	//	printf("value는 10보타 큰 수입니다.\n");
	//}
	//else {
	//	printf("value는 15보다 작은 수 입니다. \n");
	//}
	//printf("프로그램 종료 \n");

	//int age = 21;
	//if (age >= 20) {
	//	printf("성인입니다. \n");
	//}
	//else {
	//	printf("미성년자입니다. \n");
	//}
	//printf("프로그램종료 \n");

	//퀴즈1

	int secret = 1234;
	int num;

	printf("=====퀴즈 1=====\n");
	printf("비밀번호 네 자리를 입력하세요>>>");
	scanf_s("%d", &num);

	if (secret == num) {
		printf("통과 \n");
	}
	else {
		printf("불통과 \n");
	}


	//퀴즈2

	int score;
	printf("=====퀴즈 2=====\n");
	printf("점수를 입력하세요>>>");
	scanf_s("%d", &score);

	//if (score >= 0 && score <= 100) {
	//	if (score >= 90 && score <= 100) {
	//		printf("A \n");
	//	}
	//	if (score >= 80 && score < 90) {
	//		printf("B \n");
	//	}
	//	if (score >= 70 && score < 80) {
	//		printf("C \n");
	//	}
	//	if (score >= 60 && score < 70) {
	//		printf("D \n");
	//	}
	//	if (score < 60 && score >= 0) {
	//		printf("F \n");
	//	}
	//
	//}
	//
	//if (score < 0 || score > 100) {
	//	printf("띠용? \n");
	//}

	char grade;
	if (score <= 100) {
		grade = 'A';
		if (score < 90) {
			grade = 'B';
			if (score < 80) {
				grade = 'C';
				if (score < 70) {
					grade = 'D';
					if (score < 60) {
						grade = 'F';

					}
				}
			}
		}
	}

	printf("등급은 %c입니다 \n", grade);


}