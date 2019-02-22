#include "stdafx.h"
#include <queue>
#include <iostream>
#include <string>
using namespace std;

int main() {
	queue<int> q;
	int n, m;
	string s;

	cin >> n;

	while (n--) {
		cin >> s;

		if (s == "push") {
			cin >> m;
			q.push(m);
		}
		else if (s == "pop") {
			if (q.empty()) cout << "-1" << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (s == "size") {
			cout << q.size() << endl;
		}
		else if (s == "empty") {
			cout << q.empty() << endl;
		}
		else if (s == "front") {
			if (q.empty()) cout << "-1" << endl;
			else cout << q.front() << endl;
		}
		else {
			if (q.empty()) cout << "-1" << endl;
			else cout << q.back() << endl;
		}
	}

	return 0;
}