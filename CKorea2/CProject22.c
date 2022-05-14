#include <stdio.h>

void main22() {
	// 출력
	// 변수와 자료형
	// 입력
	// 연산
	// 조건문
	// 반복문
	
	// 출력
	printf("아무거나 막 입력해\n");
	printf("다음 문장\n");

	// 자료형 변수(저장공간);
	// 변수 선언(공간생성)
	int 소수점없는숫자정수;
	float 소수점있는숫자실수1;
	double 소수점있는숫자실수2;
	char 문자한개;
	char 문장[64] = "아무거나 막 이렇게 입력해";         // %s

	// 변수 대입(수학에서의 = 과는 다르다)
	소수점없는숫자정수 = 33;        // %d
	소수점있는숫자실수1 = 3.14f;      // %f
	소수점있는숫자실수2 = 3.14;       // %lf
	문자한개 = 'A';                          // %c
	
	// 변수 출력 
	printf("int는 %d\n", 소수점없는숫자정수);
	printf("float은 %f\n", 소수점있는숫자실수1); 
	printf("double은 %lf\n", 소수점있는숫자실수2);
	printf("char은 %c\n", 문자한개);
	printf("char은 %s\n", 문장);

	// 연산(+, -, ×, ÷, %)
	float 결과1 = 소수점있는숫자실수1 + 소수점있는숫자실수2;
	int 결과2 = 소수점없는숫자정수 - 소수점있는숫자실수1;
	int 결과3 = 소수점없는숫자정수 * 소수점없는숫자정수;
	float 결과4 = 소수점없는숫자정수 / 소수점있는숫자실수1;
	int 결과5 = 소수점없는숫자정수 % 2;

	printf("소수점있는숫자실수1 + 소수점있는숫자실수2 = %f\n", 결과1);
	printf("소수점없는숫자정수 - 소수점있는숫자실수1 = %d\n", 결과2);
	printf("소수점없는숫자정수 × 소수점없는숫자정수 = %d\n", 결과3);
	printf("소수점없는숫자정수 ÷ 소수점있는숫자실수1 = %f\n", 결과4);
	printf("소수점없는숫자정수를 2로 나눈 나머지 = %d\n", 결과5);


	//조건문

	int num = 3;

	if (num < 10) {
		printf("num은 10보다 작다.\n");
	}
	else if (num > 10) {
		printf("num은 10보다 크다\n");
	}
	else {
		printf("num은 10이다\n");
	}

	// =====퀴즈 : 변수하나 만들어서 그 변수의 값이 양수인지 음수인지 판단하기=====
	int quiz1 = 15;

	if (quiz1 < 0) {
		printf("이 수는 음수입니다. \n");
	}
	else {
		printf("이 수는 양수입니다.\n");
	}

	// =====퀴즈2 : 변수의 값이 홀수인지 짝수인지 판별하기 (구글검색 : 2로 나눈 나머지가 1이면 홀수, 2로 나눈 나머지가 0이면 짝수다)=====

	int quiz2 = 15;
	if (quiz2 % 2 == 1) {
		printf("이 수는 홀수입니다\n");
	}
	else if (quiz2 < 0) {
		printf("음수인디?");
	}
	else {
		printf("이 수는 짝수입니다\n.");
	}

	//조건문2
	//switch : 소괄호 안에 있는 값과  case 옆에 있는 값이 일치하면 해당 부분 실행
	switch ('A') {
	case 'A':
		printf("A입니다.\n");
		break;
	case 'B':
		printf("B입니다.\n");
		break;
	case 'C' : 
		printf("C입니다.\n");
		break;
	default:
		printf("A도 B도 C도 아닙니다.\n");
	}


	//반복문 while, for
	//for(처음값; 조건; 증감량){반복할 문장;}
	for (int i = 1; i < 6; i++) {        //5번 반복
		printf("%d번\n ", i);
	}
	 
	//while(조건){조건이 맞으면 반복할 문장;}
	int flag = 0;
	while (flag < 5) {
		printf("\n%d번 Hello While\n", flag);
		flag++;
	}
	//=====반복문을 통해서 1~10까지 출력=====

	for (int i2 = 1; i2 < 11; i2++) {
		printf("%d\n",i2 );
	 }

	// =====1~10까지 모두 더한 값 출력=====
	int sum = 0;
	for (int i3 = 1; i3 < 11; i3++) {				            
		sum += i3;     //sum = sum +   i3;    
	}
	printf("1 부터 10 까지의 합은 %d입니다.\n", sum);


}