#include <stdio.h>

void Fac();

int main() {
	printf("Mindustry ���� ���� ����\n\n");
	int one;

	while (1) {
		printf("[����] ���� ���� & ����\n");
		printf("1. ����\n2. ������(����)\n3. ���α׷� ����\n");
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
		printf("[����] ����\n");
		printf("1. �濬 �����\n2. �������� ������(Ȯ�� ����)\n");
		scanf_s("%d", &two);
		printf("\n");

		if (two == 2)
			return 0;

	}
}
