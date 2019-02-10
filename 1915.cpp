#include "stdafx.h"
#include <algorithm>
using namespace std;
int a[1001][1001];

int main() {

	int n, m, ans = 0;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			scanf("%1d", &a[i][j]);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] == 0) continue;
			a[i][j] = min({a[i][j-1], a[i-1][j], a[i-1][j-1]}) + 1;
			if (ans < a[i][j]) ans = a[i][j];
		}
	}
	printf("%d\n", ans*ans);

	return 0;
}