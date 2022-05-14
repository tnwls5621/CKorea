// 함수 : 코드를 저장하는 기술 (C언어에서 주어지는 문법으로는 할 수 없는 계산을 개발자가 직접 만들어서 사용한다)
// 기능단위로 저장, 소괄호가 붙어 있음
//내가 만드는 함수는 메인 함수보다 앞에 만들자
// 함수는 함수끼리 벽에 갇혀있어 다른 함수에서는 변수명이 겹쳐도 됨
#include <stdio.h>
//Sum이라는 이름의 함수
void Sum(int var1, int var2, int var3) {

	printf("%d\n", var1 + var2 + var3);

}

//Sub : 두 수를 뺀다(첫번째 값 - 두번째 값). 만약 음수가 있으면 음수는 양수로 바꿔서 뺀다. 
void Sub(int  var1, int var2) {
	if (var1 < 0) {
		var1 = -var1;
	}
	if (var2 < 0) {
		var2 = -var2;
	}
	printf("%d\n", var1 - var2);
}

// Div : 나누기 기능을 만들되 0으로 나누려하면 0을 출력하게 만들기, 소수점도 표현 가능하게
void Div(int var1, int var2) {
	float div = (float)var1 / (float)var2;
	if (var2 == 0) {
		printf("0\n");
	}
	else {		
		printf("%f\n", div);
	}
}

// main 이라는 이름의 함수
void main23() {

	Sum(50, 20, 2);
	Sum(10, 20, 2);
	Sum(1, 2, 2);

	Sub(-10, -5);         //5

	Div(10,  5);
	Div(10, 0);
	Div(10, 3);
	Div(0, 7);
}

