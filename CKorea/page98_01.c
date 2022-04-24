//교재 98page
	//1.
#include <stdio.h>

void main01() {
	int age;
	int 요금;

	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);

	(age < 20) ? printf("당신의 나이는 %d세이며, 요금은 %d원입니다!", age, 800) : printf("당신의 나이는 %d세이며, 요금은 %d원입니다!", age, 1250);

}