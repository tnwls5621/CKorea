#include <stdio.h>

void main7() {

	// ���� = 84, ���� = 78, ���� = 88, 
	// ����, ���
	// ������� : ������ ooo���̰�, ����� 000���̴�.

	int kor = 84, math = 78, eng = 88;

	int sub = kor + math + eng;
	float mean = (float)sub / 3;
	//float mean = (float)sub / 3.0f ;     �̷��� �ڷ����� �ٲ��� ���� �ִ�.

	printf("������ %d���̰�, ����� %.2f�� �̴�", sub, mean);
}