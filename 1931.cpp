#include "stdafx.h"
#include <algorithm>
#include <vector>
using namespace std;

struct Meeting
{
	int begin, end;
};

bool tmp(struct Meeting &u, struct Meeting &v) {
	if (u.end == v.end) return u.begin < v.begin;
	else return u.end < v.end;
}

int main() {

	int n, aws = 0, now = 0;

	scanf("%d", &n);

	vector<Meeting> a(n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a[i].begin, &a[i].end);
	}

	sort(a.begin(), a.end(), tmp);

	for (int i = 0; i < a.size(); i++) {
		if (now <= a[i].begin) {
			now = a[i].end;
			aws += 1;
		}
	}
	printf("%d\n", aws);
	return 0;
}