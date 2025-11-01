#include <stdio.h>
#include "drill.h" //드릴과 펌프의 출력량 반환
#include "factory.h" //요구량 계산 & 출력

int Fac(), level_one();

int main() {
	printf("Mindustry 공장 비율 계산기 (단위: /초)\n\n");
	int one = 0;

	while (1) {
		one = level_one();

		if (one == 3)
			break;
		
		if (one == 1) {
			Fac();
		}
	}
	return 0;
}

int level_one() {
	int one;

	while (1) {
		printf("[메인] 범주 선택 & 종료\n");
		printf("1. 공장\n2. 발전기(예정)\n3. 프로그램 종료\n>> ");
		scanf_s("%d", &one);
		printf("\n\n");

		//정수형 검사 가능한지 검색
		//안되면 반복문에서 빼야함
		break;
	}

}

int Fac() {
	int two, ea;
	while (1) {
		printf("[공장] 선택\n");
		printf("1. 흑연 압축기\n2. 대형 흑연 압축기\n3. 실리콘 제련소\n4. 실리콘 도가니");
		printf("\n99. 메인으로 나가기\n>> ");
		scanf_s("%d", &two);
		printf("\n");

		if (two == 99)
			return 0;
		printf("공장 갯수를 입력하시오 : ");
		scanf_s("%d", &ea);
		printf("\n");

		switch (two) {
		case 1:
			g_press(ea);
			break;
		case 2:
			m_press(ea);
			break;
		case 3:
			silicon(ea);
			break;
		case 4:
			silCruc(ea);
			break;
		}
		printf("========== 끝 ==========\n");
	}
}

