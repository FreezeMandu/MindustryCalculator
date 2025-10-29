#pragma once
//공장 갯수를 미리 입력받은 상태
void g_press(int ea), m_press(int ea);

void g_press(int ea) {
	printf("[흑연 압축기]\n");

	double coal = 1.33; //공장 하나의 요구량
	printf("석탄 필요량: %.3lf\n\n", ea * coal);

	printf("{석탄 드릴}\n");
	for (int i = 1; i <= 4; i++) {
		double drill = (ea * coal) / OneDrill(i); //드릴 수 저장

		printf("%d티어 드릴 갯수: %.3lf / ", i, drill);
		if (i <= 3) //3티어까지 가속 배수 같음
			printf("물 가속시 : %.3lf", drill / 2.56);
		else if (i == 4)
			printf("물 가속시 : %.3lf", drill / 3.24);
		printf("\n");
	}
	printf("\n");
}

void m_press(int ea) {
	printf("[대형 흑연 압축기]\n");

	double coal = 6.0, water = 6.0;
	printf("석탄 필요량: %.3lf\n물 필요량: %.3lf\n\n", ea * coal, ea * water);

	printf("{석탄 드릴}\n");
	for (int i = 1; i <= 4; i++) {
		double drill = (ea * coal) / OneDrill(i); //드릴 수 저장

		printf("%d티어 드릴 갯수: %.3lf / ", i, drill);
		if (i <= 3) //3티어까지 가속 배수 같음
			printf("물 가속시 : %.3lf", drill / 2.56);
		else if (i == 4)
			printf("물 가속시 : %.3lf", drill / 3.24);
		printf("\n");
	}
	printf("\n");

	printf("물 추출기 갯수: %.3lf\n", (ea * water) / 6.6);
	for (int i = 1; i <= 3; i++) {
		double pump = (ea * water) / Pump(i);
		printf("%d티어 펌프 갯수: %.3lf\n", i, pump);
	}
	printf("\n");
}

void silicon(int ea) {
	printf("[실리콘 제련소]\n");

	double coal = 1.5, sand = 3.0;
	printf("석탄 필요량 : %.3lf\n모래 필요량 : %.3lf\n\n", coal * ea, sand * ea);

	printf("{석탄 드릴}\n");
	for (int i = 1; i <= 4; i++) {
		double drill = (ea * coal) / OneDrill(i); //드릴 수 저장

		printf("%d티어 드릴 갯수: %.3lf / ", i, drill);
		if (i <= 3) //3티어까지 가속 배수 같음
			printf("물 가속시 : %.3lf", drill / 2.56);
		else if (i == 4)
			printf("물 가속시 : %.3lf", drill / 3.24);
		printf("\n");
	}
	printf("\n");

	printf("{모래 드릴}\n");
	for (int i = 1; i <= 4; i++) {
		double drill = (ea * sand) / OneDrill(i); //드릴 수 저장

		printf("%d티어 드릴 갯수: %.3lf / ", i, drill);
		if (i <= 3) //3티어까지 가속 배수 같음
			printf("물 가속시 : %.3lf", drill / 2.56);
		else if (i == 4)
			printf("물 가속시 : %.3lf", drill / 3.24);
		printf("\n");
	}
	printf("\n");
}