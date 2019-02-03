#include "stdafx.h"
int a[100][3];

int main() {

	int n;

	a[0][0] = 1;
	//a[0][1] = 1;
	//a[0][2] = 1;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		a[i][0] = a[i - 1][0] + a[i - 1][1] + a[i - 1][2];
		a[i][1] = a[i - 1][0] + a[i - 1][2];
		a[i][2] = a[i - 1][0] + a[i - 1][1];
		for (int j = 0; j < 3; j++) a[i][j] %= 9901;
	}

	printf("%d\n", (a[n][0] + a[n][1] + a[n][2])%9901);
	return 0;
}