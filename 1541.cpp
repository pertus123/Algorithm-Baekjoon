#include "stdafx.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	int cur = 0, ans = 0;
	bool tmp = false;
	cin >> s;

	vector<int> num;
	vector<int> sign;

	sign.push_back(1);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '+' || s[i] == '-') {
			if (s[i] == '+') sign.push_back(1);
			else sign.push_back(-1);
			num.push_back(cur);
			cur = 0;
		}
		else cur = cur * 10 + (s[i] - '0');
	}
	num.push_back(cur);

	for (int i = 0; i < num.size(); i++) {
		if (sign[i] == -1) tmp = true;
		if (tmp) ans -= num[i];
		else ans += num[i];
	}

	cout << ans << '\n';

	return 0;
}