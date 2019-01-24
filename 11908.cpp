#include "stdafx.h"

int main() {

	int n, a, b = 0, sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (b < a) b = a;
		sum += a;
	}

	printf("%d\n", sum - b);

	return 0;
}