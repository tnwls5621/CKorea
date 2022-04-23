#include <stdio.h>

void main()
{
	//TOTO : 간단한 자기소개
	//이름은 변수로
	//나이도 변수로

	//printf 자기소개

	char name[250] = "신수진";
	int age = 23;

	printf("안녕하세요? 저의 이름은 %s 입니다\n", name);
	printf("저의 나이는 %d 입니다\n", age);
}

//새로운 파일을 실행시키고 싶으면 파일에 우클릭하고 '시작프로젝트로 설정'