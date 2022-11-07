#include<iostream>
#include<queue>
#include<vector>


using namespace std;

typedef pair<int, int> pii;
const int INF = 1e5 * 8 * 3;


vector<int> dijkstra(int start,int n, vector<vector<pii>>&graph) {
	vector<int> dist(n+ 1, INF);
	dist[start] = 0;
	//pq ����
	priority_queue < pii, vector<pii>, greater<pii>> pq;
	pq.push(pii(0, start));

	//dijstra
	while (!pq.empty()) {
		int d = pq.top().first;
		int v = pq.top().second;
		pq.pop();

		if (d > dist[v]) {
			continue;
		}

		//Ž�� & �Ÿ� �� ����
		for (int i = 0; i < graph[v].size(); i++) {
			int nxt_v = graph[v][i].first;
			int cost = graph[v][i].second;
			//�Ÿ��� ������ ���� �� pq�� ����
			if (dist[nxt_v] > dist[v] + cost) {
				dist[nxt_v] = dist[v] + cost;
				pq.push(pii(dist[nxt_v], nxt_v));
			}
		}
	}
	return dist;
}

/*
�ʼ������� ������ �ϴ� v1,v2 ��带 �������� ���
1) 1->v1->v2->n
2) 1->v2->v1->n
������ �׷����̹Ƿ� 1,v1,v2�� ���� ���ͽ�Ʈ�� ������ �� ����� ���� �� �� min �� ����
*/
int solve(int v1, int v2,int n, vector<vector<pii>> &graph) {
	vector<int> start = { 1,v1,v2 };
	vector<vector<int>> dist(3, vector<int>(n + 1, 0));

	//1,v1,v2�� ���� ���ͽ�Ʈ�� ����
	for (int i = 0; i < 3; i++) {
		dist[i] = dijkstra(start[i], n, graph);
	}

	int ans = min(dist[0][v1] + dist[1][v2] + dist[2][n], dist[0][v2] + dist[2][v1] + dist[1][n]);
	
	if (ans >= INF) {
		return -1;
	}
	return ans;
}

int main() {
	int  e, v1, v2,n;

	cin >> n >> e;
	vector<vector<pii>> graph(n+1,vector<pii>(0));
	while(e--){
		int a, b, c;
		cin >> a >> b >> c;
		//�Է¹��� �� ����. ����� �׷����̹Ƿ� a�� b ��� ���� ���־����
		graph[a].push_back(pii(b, c));
		graph[b].push_back(pii(a, c));
	}

	cin >> v1 >> v2;
	cout << solve(v1, v2,n,graph);
}