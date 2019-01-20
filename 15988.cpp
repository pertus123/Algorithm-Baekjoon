#include "stdafx.h"

int main() {

	long long int a[5];
	int n, m;

	a[1] = 1;
	a[2] = 2;
	a[3] = 4;

	scanf("%d", &m);

	while (m--) {
		scanf("%d", &n);

		for (int i = 4; i <= n; i++) {
			a[4] = (a[3] + a[2] + a[1]) % 1000000009;
			a[1] = a[2];
			a[2] = a[3];
			a[3] = a[4];
		}
		if (n < 4) printf("%d\n", a[n]);
		else printf("%lld\n", a[4]);

		a[1] = 1;
		a[2] = 2;
		a[3] = 4;
	}

	return 0;
}