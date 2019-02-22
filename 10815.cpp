#include "stdafx.h"
#include <stdlib.h>
int a[100];

int com(const void* u, const void* v) {
	if (*(int *)u > *(int *)v) return 1;
	else return -1;
}

int main() {
	int n, m, k;
	int l, r, mid;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	qsort(a, n, sizeof(int), com);

	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
		scanf("%d", &k);
		r = n - 1;
		l = 0;
		int ans = 0;
		while (r >= l) {
			mid = (r + l) / 2;
			if (a[mid] > k) r = mid - 1;
			else if (a[mid] == k) {
				ans = 1;
				break;
			}
			else l = mid + 1;
		}
		printf("%d\n", ans);
	}
	return 0;
}