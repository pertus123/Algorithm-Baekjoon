#include "stdafx.h"
#include <stdlib.h>
int a[100000];

int com(const void* u, const void* v) {
	if (*(int *)u > *(int *)v) return 1;
	else return -1;
}

int main() {

	int n, m, k, ans = 0;
	int r, l, mid;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	qsort(a, n, sizeof(int), com);

	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
		scanf("%d", &k);
		ans = 0;
		l = 0;
		r = n-1;

		while (r >= l) {
			mid = (l + r) / 2;
			if (a[mid] < k) l = mid + 1;
			else if (a[mid] == k) {
				ans = 1;
				break;
			}
			else r = mid - 1;
		}

		printf("%d\n", ans);
	}

	return 0;
}