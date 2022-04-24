#include <stdio.h>

void main7() {

	// 국어 = 84, 수학 = 78, 영어 = 88, 
	// 총점, 평균
	// 결과예시 : 총점은 ooo점이고, 평균은 000점이다.

	int kor = 84, math = 78, eng = 88;

	int sub = kor + math + eng;
	float mean = (float)sub / 3;
	//float mean = (float)sub / 3.0f ;     이렇게 자료형을 바꿔줄 수도 있다.

	printf("총점은 %d점이고, 평균은 %.2f점 이다", sub, mean);
}