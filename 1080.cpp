#include "stdafx.h"
int a[50][50];
int b[50][50];
int ans = 0;

void cmp(int x, int y) {
	for (int i = x - 1; i <= x + 1; i++) {
		for (int j = y - 1; j <= y + 1; j++) {
			a[i][j] = 1 - a[i][j];
		}
	}
}

int main() {

	int n, m;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%1d", &a[i][j]);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%1d", &b[i][j]);

	for (int i = 0; i < n-2; i++) {
		for (int j = 0; j < m-2; j++) {
			if (a[i][j] != b[i][j]) {
				ans++;
				cmp(i + 1, j + 1);
			}
		}
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (a[i][j] != b[i][j])
				ans = -1;

	printf("%d\n", ans);

	return 0;
}