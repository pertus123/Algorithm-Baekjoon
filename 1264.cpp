#include "stdafx.h"
int a[101];
int b[101];

int main() {

	int n, m, max = -99999999;

	scanf("%d %d", &n, &m);

	for(int i = 1; i<=n; i++) scanf("%d", &a[i]);
	for (int i = m; i <= n; i++)
		for (int j = i -( m-1); j <= i; j++) 
			b[i] += a[j];

	for (int i = m; i <= n; i++)
		if (b[i] > max) max = b[i];

	printf("%d\n", max);

	return 0;
}