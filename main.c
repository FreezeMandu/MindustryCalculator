#include <stdio.h>
#include "drill.h" //�帱�� ������ ��·� ��ȯ
#include "factory.h" //�䱸�� ��� & ���

int Fac(), level_one();

int main() {
	printf("Mindustry ���� ���� ���� (����: /��)\n\n");
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
		printf("[����] ���� ���� & ����\n");
		printf("1. ����\n2. ������(����)\n3. ���α׷� ����\n>> ");
		scanf_s("%d", &one);
		printf("\n\n");

		//������ �˻� �������� �˻�
		//�ȵǸ� �ݺ������� ������
		break;
	}

}

int Fac() {
	int two, ea;
	while (1) {
		printf("[����] ����\n");
		printf("1. �濬 �����\n2. ���� �濬 �����\n3. �Ǹ��� ���ü�\n4. �Ǹ��� ������");
		printf("\n99. �������� ������\n>> ");
		scanf_s("%d", &two);
		printf("\n");

		if (two == 99)
			return 0;
		printf("���� ������ �Է��Ͻÿ� : ");
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
		printf("========== �� ==========\n");
	}
}

