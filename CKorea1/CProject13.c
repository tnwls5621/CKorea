#include <stdio.h>

void main13() {
	//���
	printf("hello world\n");


	//����(�������)
	//����  ����(��������)
	int var1;          //���� ������ ������� ���� (��ǻ���� 4ĭ, 4byte)
	float var2;        // �Ҽ��� �ִ� ���������� ������� ���� (4ĭ, 4byte)
	char var3;         // ���������� ������� ���� (1ĭ, 1byte)

    //����
	var1 = 33;
	var2 = 3.14;
	var3 = 'a';
	
	//���� �ʱ�ȭ
	char var4[255] = "hello world";


	//������ ���
	printf("%d, %f, %c, %s\n", var1, var2, var3, var4);

	//�Է�
	scanf_s("%d", &var1);
	printf("%d\n", var1);

	scanf_s("%f", &var2);
	printf("%f\n", var2);

	scanf_s("%s", &var4, 255);    //���ڿ��� �� ���̱��� �����ֱ�!(�˳��ϰ� 255��~!)
	printf("%s\n", var4);  





}