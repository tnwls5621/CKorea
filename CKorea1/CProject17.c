#include <stdio.h>

void main17
() {
	//int num = 15;
	//if (num < 10) {
	//	printf("���ڸ� �� \n");
	//}
	//else if (num < 100) {
	//	printf("���ڸ� �� \n");
	//}
	//else if (num < 1000) {
	//	printf("���ڸ� ��\n");
	//}
	//else {
	//	printf("�� ��\n");
	//}
	
	//����4
	printf("=====����4=====\n");

	int age;
	printf("���̸� �Է��ϼ���>>>");
	scanf_s("%d", &age);
	 
	if (age > 0 && age < 200) {
		if (age >= 20) {
			printf("�����Դϴ�.\n");
		}
		else if (age >= 14) {
			printf("û�ҳ��Դϴ�.\n");
		}
		else {
			printf("��� �Դϴ�.\n") ;
		}
	}
	else {
		printf("���?\n");
	}

	//����5
	printf("=====����4=====\n");

	int year;
	printf("�⵵�� �Է��ϼ���>>>");
	scanf_s("%d", &year);

	int ampersand = year % 4;
	int ampersand1 = year % 100;
	int ampersand2 = year % 400;

	if (ampersand == 0 && ampersand1 != 0 ) {
		printf("%d���� �����Դϴ�.\n", year);
	}
	else if (ampersand2 == 0) {
		printf("%d���� �����Դϴ�.\n", year);
	}
	else {
		printf("%d���� �����̾ƴմϴ�. \n", year);
	}








}