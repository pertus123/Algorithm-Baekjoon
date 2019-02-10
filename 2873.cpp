#include "stdafx.h"

int main() {

	int n, m;
	//int a[50][50];
	int aqq, a, b;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &aqq);
			if (i == n - 2 && j == m - 1) a = aqq;
			if (i == n - 1 && j == m - 2) b = aqq;
		}
	}

	if (n % 2 == 1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m-1; j++) {
				if (i % 2 == 0) printf("R");
				else printf("L");
			}
			if(i != n-1) printf("D");
		}
	}

	else if (m % 2 == 1) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n - 1; j++) {
				if (i % 2 == 0) printf("D");
				else printf("U");
			}
			if (i != m - 1) printf("R");
		}
	}

	else {
		for (int i = 0; i < n-2; i++) {
			for (int j = 0; j < m - 1; j++) {
				if (i % 2 == 0) printf("R");
				else printf("L");
			}
			if (i != n - 1) printf("D");
		}
		for (int i = 0; i < m - 2; i += 2) printf("DRUR");
		if (a > b)printf("RD");
		else printf("DR");
	}

	printf("\n");
	return 0;
}