#include "stdafx.h"
#include <algorithm>
#include <iostream>
using namespace std;
int a[1001][3];
int d[1001][3];

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);

	for (int i = 1; i <= n; i++) {
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[i][0];
		d[i][1] = min(d[i - 1][2], d[i - 1][0]) + a[i][1];
		d[i][2] = min(d[i - 1][1], d[i - 1][0]) + a[i][2];
	}

	printf("%d\n", min(min(d[n][0], d[n][1]), d[n][2]));

	return 0;
}