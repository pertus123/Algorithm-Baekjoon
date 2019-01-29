#include "stdafx.h"
#include <algorithm>
using namespace std;

int main() {

	int h, w;

	scanf("%d %d", &h, &w);

	if (h == 1) {
		printf("1\n");
	}
	else if (h == 2) {
		printf("%d\n", min(4, (w + 1) / 2));
	}
	else {
		if (w >= 7) {
			printf("%d\n", w - 2);
		}
		else {
			printf("%d\n", min(4,w));
		}
	}

	return 0;
}