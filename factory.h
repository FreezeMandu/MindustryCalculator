#pragma once
//���� ������ �̸� �Է¹��� ����
void g_press(int ea), m_press(int ea);

void g_press(int ea) {
	printf("[�濬 �����]\n");

	double coal = 1.33; //���� �ϳ��� �䱸��
	printf("��ź �ʿ䷮: %.3lf\n\n", ea * coal);

	printf("{��ź �帱}\n");
	for (int i = 1; i <= 4; i++) {
		double drill = (ea * coal) / OneDrill(i); //�帱 �� ����

		printf("%dƼ�� �帱 ����: %.3lf / ", i, drill);
		if (i <= 3) //3Ƽ����� ���� ��� ����
			printf("�� ���ӽ� : %.3lf", drill / 2.56);
		else if (i == 4)
			printf("�� ���ӽ� : %.3lf", drill / 3.24);
		printf("\n");
	}
	printf("\n");
}

void m_press(int ea) {
	printf("[���� �濬 �����]\n");

	double coal = 6.0, water = 6.0;
	printf("��ź �ʿ䷮: %.3lf\n�� �ʿ䷮: %.3lf\n\n", ea * coal, ea * water);

	printf("{��ź �帱}\n");
	for (int i = 1; i <= 4; i++) {
		double drill = (ea * coal) / OneDrill(i); //�帱 �� ����

		printf("%dƼ�� �帱 ����: %.3lf / ", i, drill);
		if (i <= 3) //3Ƽ����� ���� ��� ����
			printf("�� ���ӽ� : %.3lf", drill / 2.56);
		else if (i == 4)
			printf("�� ���ӽ� : %.3lf", drill / 3.24);
		printf("\n");
	}
	printf("\n");

	printf("�� ����� ����: %.3lf\n", (ea * water) / 6.6);
	for (int i = 1; i <= 3; i++) {
		double pump = (ea * water) / Pump(i);
		printf("%dƼ�� ���� ����: %.3lf\n", i, pump);
	}
	printf("\n");
}

void silicon(int ea) {
	printf("[�Ǹ��� ���ü�]\n");

	double coal = 1.5, sand = 3.0;
	printf("��ź �ʿ䷮ : %.3lf\n�� �ʿ䷮ : %.3lf\n\n", coal * ea, sand * ea);

	printf("{��ź �帱}\n");
	for (int i = 1; i <= 4; i++) {
		double drill = (ea * coal) / OneDrill(i); //�帱 �� ����

		printf("%dƼ�� �帱 ����: %.3lf / ", i, drill);
		if (i <= 3) //3Ƽ����� ���� ��� ����
			printf("�� ���ӽ� : %.3lf", drill / 2.56);
		else if (i == 4)
			printf("�� ���ӽ� : %.3lf", drill / 3.24);
		printf("\n");
	}
	printf("\n");

	printf("{�� �帱}\n");
	for (int i = 1; i <= 4; i++) {
		double drill = (ea * sand) / OneDrill(i); //�帱 �� ����

		printf("%dƼ�� �帱 ����: %.3lf / ", i, drill);
		if (i <= 3) //3Ƽ����� ���� ��� ����
			printf("�� ���ӽ� : %.3lf", drill / 2.56);
		else if (i == 4)
			printf("�� ���ӽ� : %.3lf", drill / 3.24);
		printf("\n");
	}
	printf("\n");
}