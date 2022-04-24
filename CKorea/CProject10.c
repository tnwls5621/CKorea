#include <stdio.h>

void main10() {
	//.1
	int 국어, 수학, 영어;

	printf("국어 점수를 입력하세요>>>");
	scanf_s("%d", &국어);

	printf("수학 점수를 입력하세요>>>");
	scanf_s("%d", &수학);

	printf("국어 점수를 입력하세요>>>");
	scanf_s("%d", &영어);

	int 총점 = 국어 + 수학 + 영어;
	float 평균 = 총점 / 3.0;   //총점은 int 형이지만 3.0은 float 형이기 때문에 평균은 float형이 된다.

	printf("총점 : %d, 평균 : %.1f\n", 총점, 평균);


	//2.
	int 숫자1, 숫자2;
	printf("숫자1을 입력하세요>>>");
	scanf_s("%d", &숫자1);
	printf("숫자2를 입력하세요>>>");
	scanf_s("%d", &숫자2);

	int sum = 숫자1 + 숫자2;
	int sub = 숫자1 - 숫자2;
	int mul = 숫자1 * 숫자2;
	float div = (float) 숫자1 / 숫자2;

	printf("n1 + n2 = %d\n", sum);
	printf("n1 - n2 = %d\n", sub);
	printf("n1 * n2 = %d\n", mul);
	printf("n1 / n2 = %fn", div);
}