#include <stdio.h>

// �Լ� : �ڵ带 �����ϴ� ��� (��ɴ����� ����)
// �Ѱ��ٶ� ()
// ����� ���� �� return

//int Print(int var) {
//	printf("����Ʈ �Լ� ����Ǿ����ϴ�.\n");
//
//		return var-100;
//}

int Sum2(int var1, int var2) {     //���� ����� �Լ� �̸��� �ٸ� ���� �̴��� �̸��� ��ġ�� �ȵ�.
	
	return var1 + var2;
}

int main() {
	int result1 = Sum2(10, 20);
	printf("%d\n", result1);
	//int s = Print(123);         //Print �Լ��� �� ����ǰ� ���� �� �ڸ��� 23�� ���´�(���ϰ�) //�Ѱ��ٶ� �Ұ�ȣ �ٽ� �Ѱ� ���� �� ���� ��
	//printf("%d\n", s);
	return 0;
}
