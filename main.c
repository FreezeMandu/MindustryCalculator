#include <stdio.h>

void Fac();

int main() {
	printf("Mindustry 공장 비율 계산기\n\n");
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

void Fac() {
	int two;
	while (1) {
		printf("[공장] 선택\n");
		printf("1. 흑연 압축기\n2. 메인으로 나가기(확장 예정)\n");
		scanf_s("%d", &two);
		printf("\n");

		if (two == 2)
			return 0;

	}
}
