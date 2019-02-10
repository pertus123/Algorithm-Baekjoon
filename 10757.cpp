#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

	int n=0, m;
	string a, b, result, c, d;
	cin >> a >> b;
	
	if (a.size() > b.size()) {
		for (int i = 0; i < a.size() - b.size(); i++) c += '0';
		b = c + b;
	}
	else {
		for (int i = 0; i <  b.size()- a.size(); i++) d += '0';
		a = d + a;
	}

	for (int i = a.size()-1; i >= 0; i--) {
		m = (a[i] - '0') + (b[i] - '0')+n;
		if (m >= 10) n = 1;
		else n = 0;
		m = m % 10;
		result = (char)(m+'0')+result;
	}
	if (n) result = '1' + result;
	cout << result << endl;

	return 0;
}