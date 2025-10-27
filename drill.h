#pragma once
//��) �μ� 1�� ������ ���帱 ä����, 2�� ������ ���е帱 ä����..
//�ۿ��� �� �ڿ��� �´� Ƽ���� ä������ ��Ī���Ѿ� ��.
//1T - sand, scrap / 2T - copper, lead / 3T - coal / 4T - titanium / 5T - thorium
//���ӹ��: ������ 2.56, �а� 3.24

double OneDrill(int d_tier), TwoDrill(int d_tier), ThreeDrill(int d_tier), FourDrill(int d_tier), FiveDrill(int d_tier);

double OneDrill(int d_tier) { //1Ƽ�� �ڿ� �帱�� ä����
	if (d_tier == 1) //���帱
		return 0.4;
	else if (d_tier == 2) //���е帱
		return 0.6;
	else if (d_tier == 3) //�������帱
		return 1.92;
	else if (d_tier == 4) //�а��帱
		return 3.42;
}

double TwoDrill(int d_tier) {
	if (d_tier == 1)
		return 0.36;
	else if (d_tier == 2)
		return 0.53;
	else if (d_tier == 3)
		return 1.63;
	else if (d_tier == 4)
		return 2.9;
}

double ThreeDrill(int d_tier) {
	if (d_tier == 1)
		return 0.34;
	else if (d_tier == 2)
		return 0.48;
	else if (d_tier == 3)
		return 1.42;
	else if (d_tier == 4)
		return 2.52;
}

double FourDrill(int d_tier) {
	if (d_tier == 1)
		return 0;
	else if (d_tier == 2)
		return 0.43;
	else if (d_tier == 3)
		return 1.25;
	else if (d_tier == 4)
		return 2.23;
}

double FiveDrill(int d_tier) {
	if (d_tier == 1)
		return 0;
	else if (d_tier == 2)
		return 0;
	else if (d_tier == 3)
		return 1.12;
	else if (d_tier == 4)
		return 2.0;
}