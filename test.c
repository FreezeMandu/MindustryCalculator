#include <stdio.h>

int main() {
	char one[10], scan[10] = { 0 };
	scanf_s("%s", &one, 10);

	for (int i = 0; i < 10; i++) {
		if (one[i] != '\0') {
			//scan[i] = one[i];
		}
	}
	printf("%s", scan);

	return 0;
}

//¾Æ½ºÅ° 48 ~ 57 -> 0 ~ 9