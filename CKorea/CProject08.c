#include <stdio.h>

void main8() {
	int num1, num2;

	num1 = 3;
	num2 = 4;

	//��������
	num1 += 3;         //num1 = num1 + 3; �ڱ� �ڽſ� 3�� ���Ͽ� �����϶�
	printf("%d\n", num1);

	num1 -= 3;         //num1 = num1 - 3; �ڱ� �ڽſ� 3�� �� �����϶�
	printf("%d\n", num1);
	
	num2++;    //num2 += 1;         //num2 = num2 + 1;       //1�� �Ҽ� ����(���� ������ ���� ��ȣ�� ���� ��!)
	printf("%d\n", num2);

	num2--;    //num2 -= 1;         //num2 = num2 - 1;       //1�� �Ҽ� ����(���� ����)        //���ϱ�� ������� ����
	printf("%d\n", num2);



}