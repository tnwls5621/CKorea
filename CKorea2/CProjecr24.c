#include <stdio.h>

// 함수 : 코드를 저장하는 기술 (기능단위로 저장)
// 넘겨줄땐 ()
// 결과를 받을 땐 return

//int Print(int var) {
//	printf("프린트 함수 실행되었습니다.\n");
//
//		return var-100;
//}

int Sum2(int var1, int var2) {     //내가 만드는 함수 이름은 다른 파일 이더라도 이름이 겹치면 안됨.
	
	return var1 + var2;
}

int main() {
	int result1 = Sum2(10, 20);
	printf("%d\n", result1);
	//int s = Print(123);         //Print 함수가 다 실행되고 나면 그 자리엔 23만 남는다(리턴값) //넘겨줄땐 소괄호 다시 넘겨 받을 땐 리턴 값
	//printf("%d\n", s);
	return 0;
}
