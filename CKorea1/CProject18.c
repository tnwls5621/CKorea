#include <stdio.h>

void main18() {

	//소괄호 안에 있는 값이 case에 있는 값과 같으면 해당 코드를 실행
	switch (1) {
	case 0:
		printf("0 \n");
		break;
	case 1:
		printf("1 \n");
		break;
	case 2:
		printf("2 \n");
		break;
	default:
		printf("일치하는 값이 없음. \n");

	}

	int num = 2;
	switch (num)
	{
	case 0:
		printf("선택은 0번 입니다. \n");
		break;
	case 1:
		printf("선택은 1번 입니다. \n");
		break;
	case 2:
		printf(" 선택은 2번입니다. \n");
		break;
	default:
		printf("일치하는 번호가 없습니다. \n");
	}

}
//가나다라마바사아자차카타파하