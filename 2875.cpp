#include "stdafx.h"

int main() {

	int n, m, k;
	int ans = 0;
	scanf("%d %d %d", &n, &m, &k);

	while (n >= 2 && m >= 1 && n + m >= k + 3) {
		ans += 1;
		m -= 1;
		n -= 2;
	}
	printf("%d\n", ans);

	return 0;
}