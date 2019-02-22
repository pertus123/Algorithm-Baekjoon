#include "stdafx.h"
#include <deque>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, m;
	deque<int> d;
	string s;

	cin >> n;

	while (n--) {
		cin >> s;

		if (s == "push_front") {
			cin >> m;
			d.push_front(m);
		}

		else if (s == "push_back") {
			cin >> m;
			d.push_back(m);
		}

		else if (s == "pop_front") {
			if (d.empty()) cout << "-1" << endl;
			else {
				cout << d.front() << endl;
				d.pop_front();
			}
		}

		else if (s == "pop_back") {
			if (d.empty()) cout << "-1" << endl;
			else {
				cout << d.back() << endl;
				d.pop_back();
			}
		}

		else if (s == "empty") {
			cout << d.empty() << endl;
		}

		else if (s == "front") {
			if (d.empty()) cout << "-1" << endl;
			else cout << d.front() << endl;
		}

		else if (s == "back") {
			if (d.empty()) cout << "-1" << endl;
			else cout << d.back() << endl;
		}

		else {
			cout << d.size() << endl;
		}
	}

	return 0;
}