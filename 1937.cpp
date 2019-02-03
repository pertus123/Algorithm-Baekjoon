#include "stdafx.h"
#include <algorithm>
using namespace std;
int n;
int a[500][500];
int d[500][500];
int dx[] = { 0,0,1,-1 }; // 4���� �̵� ��ǥ�� x,y;
int dy[] = { 1,-1,0,0 };

int go(int i, int j) {
	if (d[i][j] != 0) return d[i][j];
	//�Ǵٴ� 0 ���� �� �� ���� ������ 0�� ���� ����
	//�޸������̼� �ʱ�ȭ �ʿ�� ����
	d[i][j] = 1; // �� � ĭ�� �մ��� �Ǵٴ� �� �� ���� 1�� ����
	for (int k = 0; k < 4; k++){
		int x = i + dx[k];
		int y = j + dy[k]; //���� ����? �ؿ� ���� ���� �ȿ� ��� �� Ȯ��
		if (x < 0 || x >= n || y < 0 || y >= n) continue;
		if (a[i][j] < a[x][y])
			d[i][j] = max(d[i][j], go(x, y) + 1);
	}

	return d[i][j];
}

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);

	int ans = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			ans = max(ans, go(i, j));

	printf("%d\n", ans);

	return 0;
}