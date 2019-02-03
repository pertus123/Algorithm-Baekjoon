#include "stdafx.h"
#include <algorithm>
using namespace std;
int n;
int a[500][500];
int d[500][500];
int dx[] = { 0,0,1,-1 }; // 4방향 이동 좌표들 x,y;
int dy[] = { 1,-1,0,0 };

int go(int i, int j) {
	if (d[i][j] != 0) return d[i][j];
	//판다는 0 위를 살 수 없음 정답이 0인 경우는 없음
	//메모이제이션 초기화 필요는 없음
	d[i][j] = 1; // 그 어떤 칸에 잇더라도 판다는 살 수 잇음 1나 먹음
	for (int k = 0; k < 4; k++){
		int x = i + dx[k];
		int y = j + dy[k]; //범위 조건? 밑에 조건 범위 안에 드는 지 확인
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