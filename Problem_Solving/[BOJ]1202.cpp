/* 가방이랑 보석을 오름차순으로 다 정렬을 해주고
* 가방을 순회하면서 i번째 가방에 넣을 수 있는 보석들은 다 넣어줌
* 그런다음 제일 비싼 보석 넣어주고 빼줌
* 그 다음에 다음 가방은 어짜피 전 가방보다 크니깐 넣은 것들 중에서 제일 비싼거 넣으면 됨
*/

/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int n, k;
int b[300001];
pair<int, int> j[300001];
priority_queue <int> pq;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> j[i].first >> j[i].second;
	}
	for (int i = 0; i < k; i++) {
		cin >> b[i];
	}
	sort(j, j + n);
	sort(b, b + k);

	int res = 0;
	int index = 0;
	for (int i = 0; i < k; i++) {
		while (index < n && j[index].first <= b[i]) {
			pq.push(j[index++].second);
		}
		if (!pq.empty()) {
			res += pq.top();
			pq.pop();
		}
	}
	cout << res;
	return 0;
}
*/