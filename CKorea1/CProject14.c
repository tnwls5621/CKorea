#include <stdio.h>

void main14() {
	int num1, num2;

	scanf_s("%d", &num1);
	scanf_s("%d", &num2);


	int sum = num1 + num2;

	int sub = num1 - num2;

	int mul = num1 * num2;

	//float div = num1 / num2;       //num1�� num2�� int�� ���ǵǾ� �־ float���� ����� �ȵ�
	float div = (float)num1 / num2;      //�׷��� �ڷ����� float�� �ٲ���� �Ѵ�.

	int ampersand = num1 % num2;    //num1�� num2�� ���� ������


	printf("%d\n", sum);
	printf("%d\n", sub);
	printf("%d\n", mul);
	printf("%f\n", div);
	printf("%d\n", ampersand);
}