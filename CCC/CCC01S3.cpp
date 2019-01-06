#include <bits/stdc++.h>

using namespace std;

bool adjmatrix[27][27];

bool disconnect(){
	bool visited[27];
	queue<int> q;

	while(!q.empty()) { q.pop(); }
	memset(visited, 0, sizeof visited);

	q.push(0);

	while(!q.empty()) {
		int current = q.front();
		q.pop();

		if(current == 1) return false;

		visited[current] = true;

		for(int i = 0; i < 27; i++){
			if((adjmatrix[current][i] || adjmatrix[i][current]) && !visited[i]) {
				q.push(i);
			}
		}
	}

	return true;
}

int main() {
	queue<pair<int, int>> q;

	while(true) {
		string s;
		cin >> s;
		if(s == "**") break;

		adjmatrix[s[0] - 'A'][s[1] - 'A'] = true;
		q.push({s[0] - 'A', s[1] - 'A'});
	}

	int solns = 0;
	while(!q.empty()) {
		pair<int, int> r = q.front();
		q.pop();

		int a = r.first;
		int b = r.second;

		adjmatrix[a][b] = false;

		if (disconnect()) {
			cout << (char) (a + 'A') << (char) (b + 'A') << endl;
			solns++;
		}

		adjmatrix[a][b] = true;
	}

	cout << "There are " << solns << " disconnecting roads." << endl;
}
