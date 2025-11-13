#include <stdio.h>
#include <stdlib.h>
#include "drill.h" //드릴과 펌프의 출력량 반환
#include "factory.h" //요구량 계산 & 출력

int Fac();

int main() {
	printf("=== Mindustry 공장 비율 계산기 ===\n");
	printf("1. 별 다른 표기가 없으면 필요량 입출력 단위는 '/초' 입니다\n2. 제작자 깃허브 https://github.com/FreezeMandu/MindustryCalculator\n\n");
	int menu;
	char one[10], scan[10] = { 0 };

	while (1) {
		int cnt = 0; //scan[] 카운터 초기화
		printf("[메인] 범주 선택 & 종료\n");
		printf("1. 공장\n2. 발전기(예정)\n3. 프로그램 종료\n>> ");
		scanf_s(" %s", &one, 10);
		for (int i = 0; i < 10; i++) {
			scan[cnt] = 0; //정수 변환용 배열 초기화
			if (one[i] != '\0' && 48 <= one[i] && one[i] <= 57) {
				scan[cnt] = one[i];
			}
			cnt++;
		}
		menu = atoi(scan);
		printf("\n\n");

		if (menu == 3)
			break;
		
		if (menu == 1) {
			Fac();
		}
	}
	return 0;
}

int Fac() {
	int menu, ea;
	char two[10], scan[10] = { 0 }, end;
	while (1) {
		int cnt = 0; //scan[] 카운터 초기화
		printf("[공장] 선택\n");
		printf("1. 흑연 압축기\n2. 대형 흑연 압축기\n3. 실리콘 제련소\n4. 실리콘 도가니\n5. 가마\n6. 플라스터늄 압축기\n7. 메타 제조기\n8. 설금 제련소\n9. 냉각수 혼합기\n");
		printf("10. 파이라타이트 혼합기\n11. 폭발물 혼합기\n12. 융해기\n13. 광재 분리기\n14. 광재 분해기\n15. 포자 압축기\n16. 분쇄기\n17. 석탄 정제기");
		printf("\n99. 메인으로 나가기\n>> ");
		scanf_s(" %s", &two, 10);
		for (int i = 0; i < 10; i++) {
			scan[cnt] = 0; //정수 변환용 배열 초기화
			if (two[i] != '\0' && 48 <= two[i] && two[i] <= 57) { //아스키코드 0 ~ 9에 해당하면 ~
				scan[cnt] = two[i];
			}
			cnt++;
		}
		menu = atoi(scan);
		printf("\n");

		if (menu == 99)
			return 0;
		printf("공장 갯수를 입력하시오 : ");
		scanf_s("%d", &ea);
		printf("\n");

		switch (menu) {
		case 1: g_press(ea); break;
		case 2: m_press(ea); break;
		case 3: silicon(ea); break;
		case 4: silCruc(ea); break;
		case 5: kiln(ea); break;
		case 6: plasta(ea); break;
		case 7: phase(ea); break;
		case 8: surge(ea); break;
		case 9: cryo(ea); break;
		}

		getchar();
		printf("========== Enter를 눌러 넘어가기 ==========\n");
		scanf_s("%c", &end, 1);
	}
}

