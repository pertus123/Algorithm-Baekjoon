#include "stdafx.h"
#include <string>
#include <iostream>
#include <list>
using namespace std;

int main() {
	int n;
	string s;

	cin >> s;
	cin >> n;

	list<char> l(s.begin(), s.end());
	list<char>::iterator pointer_iter = l.end();

	while (n--) {
		char c, c2;
		cin >> c;
		if (c == 'P') {
			cin >> c2;
			l.insert(pointer_iter, c2);
		}
		else if (c == 'L') {
			if (pointer_iter != l.begin()) pointer_iter--;
		}
		else if (c == 'D') {
			if (pointer_iter != l.end()) pointer_iter++;
		}
		else if (c == 'B') {
			if (pointer_iter != l.begin()) {
				pointer_iter--;
				pointer_iter = l.erase(pointer_iter);
				//pointer_iter++;
			}
		}
	}

	for (auto &x : l) cout << x;
	cout << endl;

	return 0;
}