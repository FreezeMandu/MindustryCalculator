#include <stdio.h>
#include "drill.h" //드릴과 펌프의 출력량 반환
#include "factory.h" //요구량 계산 & 출력

int Fac();

int main() {
	printf("Mindustry 공장 비율 계산기 (단위: /초)\n\n");
	int one;

	while (1) {
		printf("[메인] 범주 선택 & 종료\n");
		printf("1. 공장\n2. 발전기(예정)\n3. 프로그램 종료\n");
		scanf_s("%d", &one);
		printf("\n");

		if (one == 3)
			break;
		
		if (one == 1) {
			Fac();
		}
	}
	return 0;
}

int Fac() {
	int two, ea;
	while (1) {
		printf("[공장] 선택\n");
		printf("1. 흑연 압축기\n2. 대형 흑연 압축기\n99. 메인으로 나가기(확장 예정)\n");
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
		}
	}
}

