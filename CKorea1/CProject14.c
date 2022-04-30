#include <stdio.h>

void main14() {
	int num1, num2;

	scanf_s("%d", &num1);
	scanf_s("%d", &num2);


	int sum = num1 + num2;

	int sub = num1 - num2;

	int mul = num1 * num2;

	//float div = num1 / num2;       //num1과 num2는 int로 정의되어 있어서 float으로 계산이 안됨
	float div = (float)num1 / num2;      //그래서 자료형을 float로 바꿔줘야 한다.

	int ampersand = num1 % num2;    //num1을 num2로 나눈 나머지


	printf("%d\n", sum);
	printf("%d\n", sub);
	printf("%d\n", mul);
	printf("%f\n", div);
	printf("%d\n", ampersand);
}