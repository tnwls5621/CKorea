#include <stdio.h>

void main8() {
	int num1, num2;

	num1 = 3;
	num2 = 4;

	//누적연산
	num1 += 3;         //num1 = num1 + 3; 자기 자신에 3을 더하여 대입하라
	printf("%d\n", num1);

	num1 -= 3;         //num1 = num1 - 3; 자기 자신에 3을 뺴 대입하라
	printf("%d\n", num1);
	
	num2++;    //num2 += 1;         //num2 = num2 + 1;       //1만 할수 있음(많이 쓰여서 따로 기호를 만든 것!)
	printf("%d\n", num2);

	num2--;    //num2 -= 1;         //num2 = num2 - 1;       //1만 할수 있음(많이 쓰임)        //곱하기랑 나누기는 없음
	printf("%d\n", num2);



}