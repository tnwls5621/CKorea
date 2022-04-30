#include <stdio.h>

void main15() {
	/*
	====조건문의 형식====

	if (조건) {
		조건이 맞으면 수행할 문장;         //만약 조건에 맞지 않으면 중괄호 내부를 무시하고 지나감
	}*/


	//int 나이 = 19;
	//if (나이 >= 20)
	//{
	//	printf("성인입니다. \n");

	//}

	//printf("프로그램종료");


	//int value = 15;

	//scanf_s("%d", &value);

	//if (value > 10)
	//{
	//	printf("value는 10보다 큰 수 입니다 \n");

	//}

	//printf("프로그램 종료");


	int age = -1;
	scanf_s("%d", &age);
	if (age >= 20) {
		printf("성인입니다 \n");

	}
	if (age >= 0 && age < 20) {
		printf("미성년자입니다.");
	}

	if (age < 0 || age > 200) {
		printf("?\n");
	}


}