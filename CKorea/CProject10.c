#include <stdio.h>

void main10() {
	//.1
	int ����, ����, ����;

	printf("���� ������ �Է��ϼ���>>>");
	scanf_s("%d", &����);

	printf("���� ������ �Է��ϼ���>>>");
	scanf_s("%d", &����);

	printf("���� ������ �Է��ϼ���>>>");
	scanf_s("%d", &����);

	int ���� = ���� + ���� + ����;
	float ��� = ���� / 3.0;   //������ int �������� 3.0�� float ���̱� ������ ����� float���� �ȴ�.

	printf("���� : %d, ��� : %.1f\n", ����, ���);


	//2.
	int ����1, ����2;
	printf("����1�� �Է��ϼ���>>>");
	scanf_s("%d", &����1);
	printf("����2�� �Է��ϼ���>>>");
	scanf_s("%d", &����2);

	int sum = ����1 + ����2;
	int sub = ����1 - ����2;
	int mul = ����1 * ����2;
	float div = (float) ����1 / ����2;

	printf("n1 + n2 = %d\n", sum);
	printf("n1 - n2 = %d\n", sub);
	printf("n1 * n2 = %d\n", mul);
	printf("n1 / n2 = %fn", div);
}