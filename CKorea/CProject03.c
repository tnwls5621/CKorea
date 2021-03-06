#include <stdio.h>

void main3() {
	

	//메모리 (RAM) (컴퓨터 안에 들어있는 카드) : 컴퓨터가 정보를 저장하는 공간 (내가 입력하면 그 무언가를 램에 저장한다)
	
	/*
	bit < byte < KByte <  MByte < GByte < TByte (그릇의 크기)
	정보를 저장할 수 있는 최소 단위 : bit
	1bit : 0 또는 1 중 하나를 저장할 수 있음(한글자)
	2bit : 00, 01, 10, 11 중 하나를 저장할 수 있음

	==자료형==
	char : 1byte (-128~127)                          :한글자를 저장할 때 (문자)
	short : 2byte (-3만2천~3만2천)           
	int : 4byte (-21억~21억)                           : 소수점 없는 숫자 (정수)
	long long : 8byte                                      :21억 넘는 숫자
	float : 4byte (-21억~21억)                         : 소수점 있는 숫자  (실수)
	double : 8byte


	C언어 : 옛날 컴퓨터가 아주 성능이 나쁘고 용량이 작을 때 만들어진 언어 so 공간을 많이 나눠서 효율적으로 사용하게끔 했다 

	==변수==
	변수란 : 데이터를 저장할 수 있는 저장공산(프로그래밍), 변하는 수(수학)
	수정을 위해서 만들어짐.

	*/

	//자료형(얼마만큼의 공간을 확보할 건지) 저장공간의 이름 = 저장할 값;

	char var1 = 'a';                //1byte 공간에 a라는  문자를 저장
	int var2 = 3;                    //4byte 공간에 3이라는 숫자를 저장
	double var3 = 3.14;             //8byte 공간에 3.14라는 소수점있는 숫자를 저장
	char var4[256] = "안녕하세요 반갑습니다.";                   //1byte 공간을 256개 연결(공간을 넉넉히 주자, 한글은 2바이트. 영어랑 특수문자는 1바이트, 근데 공간이 너무 크면 성능이 느려짐)
	printf("숫자는 %d!\n", var2);    //%d 라는 위치에 var2가 출력되는 거임   //3이 출력된다. 
	printf("문자는 %c!\n", var1);    //%c 라는 위치에 var1가 출력되는 거임   //a이 출력된다. 
	printf("소수점 있는 숫자는 %f!\n", var3);    //%f 라는 위치에 var3가 출력되는 거임   //3.14000이 출력된다. 
	printf("문자열은 %s!\n", var4);
	//숫자는 d,  문자는 c, 실수는 f ,문자열은 s
	//변수 : 저장공간
	//자료형 변수명;
	int num;          //변수 선언(생성)
	num = 5;        //대입(집어넣음)
	num = 8;
	num = 1;
	printf("%d", num);


	int num2 = 31111;  //변수 선언 + 대입 : 초기화  (초기값 설정)
}