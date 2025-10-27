#pragma once
//예) 인수 1을 받으면 기계드릴 채굴량, 2를 받으면 공압드릴 채굴량..
//밖에서 그 자원에 맞는 티어의 채굴량을 매칭시켜야 함.
//1T - sand, scrap / 2T - copper, lead / 3T - coal / 4T - titanium / 5T - thorium
//가속배수: 레이저 2.56, 압공 3.24

double OneDrill(int d_tier), TwoDrill(int d_tier), ThreeDrill(int d_tier), FourDrill(int d_tier), FiveDrill(int d_tier);

double OneDrill(int d_tier) { //1티어 자원 드릴별 채굴량
	if (d_tier == 1) //기계드릴
		return 0.4;
	else if (d_tier == 2) //공압드릴
		return 0.6;
	else if (d_tier == 3) //레이저드릴
		return 1.92;
	else if (d_tier == 4) //압공드릴
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