#include <stdio.h>

void main15() {
	/*
	====���ǹ��� ����====

	if (����) {
		������ ������ ������ ����;         //���� ���ǿ� ���� ������ �߰�ȣ ���θ� �����ϰ� ������
	}*/


	//int ���� = 19;
	//if (���� >= 20)
	//{
	//	printf("�����Դϴ�. \n");

	//}

	//printf("���α׷�����");


	//int value = 15;

	//scanf_s("%d", &value);

	//if (value > 10)
	//{
	//	printf("value�� 10���� ū �� �Դϴ� \n");

	//}

	//printf("���α׷� ����");


	int age = -1;
	scanf_s("%d", &age);
	if (age >= 20) {
		printf("�����Դϴ� \n");

	}
	if (age >= 0 && age < 20) {
		printf("�̼������Դϴ�.");
	}

	if (age < 0 || age > 200) {
		printf("?\n");
	}


}