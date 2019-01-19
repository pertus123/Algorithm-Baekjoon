#include "stdafx.h"
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> a[1001];
bool check[1001];

void dfs(int node) {
	check[node] = true;
	printf("%d ", node);
	for (int i = 0; i < a[node].size(); i++) {
		int next = a[node][i];
		if (check[next] == false) dfs(next);
	}
}

void bfs(int start) {
	memset(check, false, sizeof(check));
	queue<int> q;
	q.push(start);
	check[start] = true;
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		printf("%d ", node);
		for (int i = 0; i < a[node].size(); i++) {
			int next = a[node][i];
			if (check[next] == false) {
				check[next] = true;
				q.push(next);
			}
		}
	}
}

int main() {

	int n, m, u, v, start;

	scanf("%d %d %d", &n, &m, &start);

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);
	}

	for (int i = 1; i <= n; i++) {
		sort(a[i].begin(), a[i].end());
	}

	dfs(start);
	printf("\n");
	bfs(start);
	printf("\n");
	
	return 0;
}