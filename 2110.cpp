#include "stdafx.h"
#include <stdlib.h>
int a[100], n, m;

int cmp(const void *u, const void *v) {
	if (*(int*)u > *(int*)v) return 1;
	else return -1;
}

bool com(int x) {
	int cnt = 1;
	int back = a[0];
	for (int i = 1; i < n; i++)
		if (a[i]-back >= x) {
			cnt++;
			back = a[i];
		}
	return cnt >= m;
}

int main() {
	int r, l, mid, ans = 1;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	qsort(a, n, sizeof(int), cmp);

	r = a[n - 1] - a[0];
	l = 1;
	while (r >= l) {
		mid = (r + l) / 2;
		if (com(mid)) {
			if (ans <= mid) ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	printf("%d\n", ans);
	return 0;
}