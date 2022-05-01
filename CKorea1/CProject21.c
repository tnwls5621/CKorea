#include <stdio.h>

void main() {
	//제어문 : 조건문, 반복문
	// 반복횟수를 지정하기 위해선 플래그가 필요
	//int i = 0;            //플래그 : 기준을 만들어 줘야함. 반복 횟수를 지정하기 위해선 프랠그가 필요
	//while (조건) {
	//	조건이 맞으면 계속 실행할 문장;
	//	i++;              // i = i +1;

		//int i = 0;       
		//while (i < 2) {
		//	printf("안녕\n");
		//	i++;              // i = i +1;
	//}


		//예제 8번
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

	//1~10의 합을 구하기
	//int i = 1;
	//int num;
	//printf("합칠 숫자를 입력하세요>>>");            //출력하기
	//scanf_s("%d", &num); 				          //입력하기
	//int sum = 0;

	//while (i <= num) {
	//	sum += i;     //sum = sum+i;
	//	i++;
	//	printf("%d\n", i);
	//}
	//for (int j = 1; j < num; j++) {
	//	sum = sum + j;
	//}


	//printf("1~%d의 합계는 %d입니다.\n",num, sum);
	// 
	//break : 반복문을 끝냄
//continue : 1회성 취소, 밑에 있는 문장을 실행하지 않고 조건검사하는 곳으로 이동
// 
	//for문을 통해서 Hello World 5번하기
	/*printf("continue 는 1회성 취소");
	for (int i = 0; i < 5; i++) {
		if (i == 3) {
			continue;
		}
		printf("%d 번 Hello World\n", i);

	}
	printf("break 는 반복문 끝내기");
	for (int j = 0; j < 5; j++) {
		if (j == 3) {
			break;
		}
		printf("%d 번 Hello World\n", j);

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
			printf("입력 횟수를 초과했습니다.\n");
			break;
		}
		printf("비밀번호를 입력하세요>>>");
		scanf_s("%d", &num1);
		if (num1 == 1234) {
			printf("비밀번호가 일치합니다.\n");
			break;
		}
		printf("비밀번호가 맞지 않습니다\n" );
		
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
		printf("30대숫자 짝\n");	
		continue;
	}
	if ((k / 60) == 1 && ((k % 60) >= 0 && (k % 60) <= 9)) {
		printf("60대숫자 짝\n");
		continue;
	}
	if ((k / 90) == 1 && ((k % 90) >= 0 && (k % 90) <= 9)) {
		printf("90대숫자 짝\n");
		continue;
	}
	
	if (k % 10 == 3 || k % 10 == 6 || k % 10 == 9) {
		printf("짝\n");
		continue;
	}
	printf("%d\n", k);


}





















}