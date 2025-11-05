#include <stdio.h>
#include <stdlib.h>

int main() {
	int cnt = 0, menu;
	char one[10], scan[10] = { 0 };
	scanf_s(" %s", &one, 10);

	for (int i = 0; i < 10; i++) {
		if (one[i] != '\0' && 48 <= one[i] && one[i] <= 57) {
			scan[cnt++] = one[i];
		}
	}
	menu = atoi(scan);

	switch (menu) {
	case 1:
		printf("input 1\n");
		break;
	case 23:
		printf("input 23\n");
		break;
	}

	return 0;
}

//아스키 48 ~ 57 -> 0 ~ 9
//1. 배열 1을 아스키와 비교하여 숫자가 맞는가? 맞으면 배열 2에 넣기(0은 예외로 함). 배열 2 카운트는 별개로 진행함
//2. 배열 2를 정수로 바꿔 배열이 아닌 변수에 저장
//테스트 완료.