#include <stdio.h>

void main() {
	//��� : ���ǹ�, �ݺ���
	// �ݺ�Ƚ���� �����ϱ� ���ؼ� �÷��װ� �ʿ�
	//int i = 0;            //�÷��� : ������ ����� �����. �ݺ� Ƚ���� �����ϱ� ���ؼ� �����װ� �ʿ�
	//while (����) {
	//	������ ������ ��� ������ ����;
	//	i++;              // i = i +1;

		//int i = 0;       
		//while (i < 2) {
		//	printf("�ȳ�\n");
		//	i++;              // i = i +1;
	//}


		//���� 8��
		//int i = 0; 
		//while (i < 100) {
		//	printf("%d \n", i + 1);
		//	i++;
		//}

	//int i = 0;
	//while (i < 5) {
	//	printf("Hello World!\n");
	//	i++;
	//}

	//1~10�� ���� ���ϱ�
	//int i = 1;
	//int num;
	//printf("��ĥ ���ڸ� �Է��ϼ���>>>");            //����ϱ�
	//scanf_s("%d", &num); 				          //�Է��ϱ�
	//int sum = 0;

	//while (i <= num) {
	//	sum += i;     //sum = sum+i;
	//	i++;
	//	printf("%d\n", i);
	//}
	//for (int j = 1; j < num; j++) {
	//	sum = sum + j;
	//}


	//printf("1~%d�� �հ�� %d�Դϴ�.\n",num, sum);
	// 
	//break : �ݺ����� ����
//continue : 1ȸ�� ���, �ؿ� �ִ� ������ �������� �ʰ� ���ǰ˻��ϴ� ������ �̵�
// 
	//for���� ���ؼ� Hello World 5���ϱ�
	/*printf("continue �� 1ȸ�� ���");
	for (int i = 0; i < 5; i++) {
		if (i == 3) {
			continue;
		}
		printf("%d �� Hello World\n", i);

	}
	printf("break �� �ݺ��� ������");
	for (int j = 0; j < 5; j++) {
		if (j == 3) {
			break;
		}
		printf("%d �� Hello World\n", j);

	}*/

	//	for (int i = 0; i < 10; i++) {
	//		if (i % 2 == 0) {
	//			continue;
	//		}
	//		printf("%d\n", i);
	//	}



	int pass = 1234;

	for (int i = 0; i <= 3; i++)
	{
		int num1 = 0;
		if (i == 3) {
			printf("�Է� Ƚ���� �ʰ��߽��ϴ�.\n");
			break;
		}
		printf("��й�ȣ�� �Է��ϼ���>>>");
		scanf_s("%d", &num1);
		if (num1 == 1234) {
			printf("��й�ȣ�� ��ġ�մϴ�.\n");
			break;
		}
		printf("��й�ȣ�� ���� �ʽ��ϴ�\n" );
		
	}

	
for (int j = 1; j <= 100; j++) 
{
	if (j % 2 == 0) {
		continue;
	}
	printf("%d\n", j);
}



for (int k = 1; k <= 100; k++) {
	if ((k / 30) == 1 && ((k % 30) >= 0 && (k % 30) <= 9) ){
		printf("30����� ¦\n");	
		continue;
	}
	if ((k / 60) == 1 && ((k % 60) >= 0 && (k % 60) <= 9)) {
		printf("60����� ¦\n");
		continue;
	}
	if ((k / 90) == 1 && ((k % 90) >= 0 && (k % 90) <= 9)) {
		printf("90����� ¦\n");
		continue;
	}
	
	if (k % 10 == 3 || k % 10 == 6 || k % 10 == 9) {
		printf("¦\n");
		continue;
	}
	printf("%d\n", k);


}





















}