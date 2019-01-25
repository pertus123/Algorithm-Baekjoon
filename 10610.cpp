#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	string a;
	int sum = 0;

	cin >> a;

	for (int i = 0; i < a.size(); i++) sum += a[i] - '0';

	sort(a.begin(), a.end());
	if (a[0] == '0' && (sum % 3) == 0) {
		reverse(a.begin(), a.end());
		cout << a << "\n";
	}
	else cout << "-1\n";

	return 0;
}