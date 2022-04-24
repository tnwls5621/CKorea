#include <stdio.h>       //standard 의 줄임말 , io : 인풋 아웃풋의 줄인 말   -> 표준 입출력

void main6() {
	// 연산 == 계산
	//연산자 == 계산을 위한 기호
    
	// +, - *, / (대표적인 네 가지
	
	int num1, num2;     //변수 2개 생성(선언)
	num1 = 1, num2 = 2;  //대입
	num1 = num2;     //왼 쪽에 있는 num1이라는 저장공간(변수)에 num2의 값을 넣어줘
	num1 = num1;    //즉 왼쪽에 있는  num1(저장공간)과 오른쪽에 있는  num1(값)은 다른 역할로 쓰인다
	

	num1 = 1;
	num2 = 2;
	int sum = num1 + num2;   //더한 값을 변수를 따로 만들어서 저장을 해줘야 함 
	
	int sub = num1 - num2;

	int mul = num1 * num2;

	//float div = num1 / num2;       //num1과 num2는 int로 정의되어 있어서 float으로 계산이 안됨
	float div = (float)num1 / num2;      //그래서 자료형을 float로 바꿔줘야 한다.

	int ampersand = num1 % num2;    //num1을 num2로 나눈 나머지

	printf("%d\n", sum);
	printf("%d\n", sub);
	printf("%d\n", mul);
	printf("%.1f\n",  div);             //f랑 %사이에 '.1'을 넣으면 소수점 한자리까지만 나옴
	printf("%d\n",  ampersand);            
}
