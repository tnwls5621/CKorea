#include <stdio.h>       //standard �� ���Ӹ� , io : ��ǲ �ƿ�ǲ�� ���� ��   -> ǥ�� �����

void main6() {
	// ���� == ���
	//������ == ����� ���� ��ȣ
    
	// +, - *, / (��ǥ���� �� ����
	
	int num1, num2;     //���� 2�� ����(����)
	num1 = 1, num2 = 2;  //����
	num1 = num2;     //�� �ʿ� �ִ� num1�̶�� �������(����)�� num2�� ���� �־���
	num1 = num1;    //�� ���ʿ� �ִ�  num1(�������)�� �����ʿ� �ִ�  num1(��)�� �ٸ� ���ҷ� ���δ�
	

	num1 = 1;
	num2 = 2;
	int sum = num1 + num2;   //���� ���� ������ ���� ���� ������ ����� �� 
	
	int sub = num1 - num2;

	int mul = num1 * num2;

	//float div = num1 / num2;       //num1�� num2�� int�� ���ǵǾ� �־ float���� ����� �ȵ�
	float div = (float)num1 / num2;      //�׷��� �ڷ����� float�� �ٲ���� �Ѵ�.

	int ampersand = num1 % num2;    //num1�� num2�� ���� ������

	printf("%d\n", sum);
	printf("%d\n", sub);
	printf("%d\n", mul);
	printf("%.1f\n",  div);             //f�� %���̿� '.1'�� ������ �Ҽ��� ���ڸ������� ����
	printf("%d\n",  ampersand);            
}
