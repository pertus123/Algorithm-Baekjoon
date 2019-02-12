#include "stdafx.h"
long long int a[10000];

int main() {

	int n;
	long long int m, l=0, r=0, ans = 0;
	scanf("%d %lld", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
		if (r < a[i]) r = a[i];
	}
	while (l <= r) {
		long long mid = (l + r) / 2;
		long long sum = 0;
		for (int i = 0; i < n; i++)
			if (a[i] - mid > 0) sum += a[i] - mid;

		if (sum >= m) {
			if (ans < mid) ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}

	printf("%lld\n", ans);

	return 0;
}