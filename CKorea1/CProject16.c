#include <stdio.h>

void main16() {

	//int age = -1;
	//scanf_s("%d", &age);
	//if (age >= 20) {
	//	printf("�����Դϴ� \n");      //������ ������ �����ϴ� �κ� :  if �߰�ȣ ����

	//}
	//else {
	//	printf("�̼������Դϴ�.");       //������ Ʋ���� �����ϴ� �κ� :  else �߰�ȣ ����
	//}                                           //���⼭ if�� else�� �ϳ��� ��Ʈ�̴�. if�� �� �� ���� �ͺ��� ȿ���� ����  
	//


	//int value = 15;
	//if (value > 10) {
	//	printf("value�� 10��Ÿ ū ���Դϴ�.\n");
	//}
	//else {
	//	printf("value�� 15���� ���� �� �Դϴ�. \n");
	//}
	//printf("���α׷� ���� \n");

	//int age = 21;
	//if (age >= 20) {
	//	printf("�����Դϴ�. \n");
	//}
	//else {
	//	printf("�̼������Դϴ�. \n");
	//}
	//printf("���α׷����� \n");

	//����1

	int secret = 1234;
	int num;

	printf("=====���� 1=====\n");
	printf("��й�ȣ �� �ڸ��� �Է��ϼ���>>>");
	scanf_s("%d", &num);

	if (secret == num) {
		printf("��� \n");
	}
	else {
		printf("����� \n");
	}


	//����2

	int score;
	printf("=====���� 2=====\n");
	printf("������ �Է��ϼ���>>>");
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
	//	printf("���? \n");
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

	printf("����� %c�Դϴ� \n", grade);


}