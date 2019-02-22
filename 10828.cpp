#include "stdafx.h"
#include <stack>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, m;
	string s;
	stack<int> a;

	cin >> n;
	while (n--) {
		cin >> s;
		if (s == "push") {
			cin >> m;
			a.push(m);
		}
		else if (s == "top") {
			if (a.empty()) cout << "-1" << endl;
			else cout << a.top() << endl;
		}
		else if (s == "size") cout << a.size() << endl;
		else if (s == "empty") cout << a.empty() << endl;
		else {
			if (a.empty()) cout << "-1" << endl;
			else {
				cout << a.top() << endl;
				a.pop();
			}
		}
	}
	return 0;
}