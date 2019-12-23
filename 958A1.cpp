#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int n;

vector<string> rotate(vector<string> &g) {
	vector<string> h=g;
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			h[i][j]=g[n-1-j][i];
	return h;
}

vector<string> flip1(vector<string> &g) {
	vector<string> h=g;
	for (int i=0; i<n; i++)
		for (int j=0; j<n/2; j++)
			swap(h[i][j],h[i][n-1-j]);
	return h;
}

vector<string> flip2(vector<string> &g) {
	vector<string> h=g;
	for (int j=0; j<n; j++)
		for (int i=0; i<n/2; i++)
			swap(h[i][j],h[n-1-i][j]);
	return h;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	vector<string> before(n), after(n);
	for (int i=0; i<n; i++) cin>>before[i];
	for (int i=0; i<n; i++) cin>>after[i];
	set<vector<string>> st; st.insert(before);
	queue<vector<string>> q; q.push(before);
	while(!q.empty()) {
		auto cur=q.front(); q.pop();
		auto nxt=cur;
		for (int i=0; i<4; i++) {
			if(st.find(nxt)==st.end()) {
				st.insert(nxt);
				q.push(nxt);
			}
			nxt=rotate(nxt);
		}
		nxt=flip1(before);
		if(st.find(nxt)==st.end())
			st.insert(nxt), q.push(nxt);
		nxt=flip2(before);
		if(st.find(nxt)==st.end())
			st.insert(nxt), q.push(nxt);
	}
	cout << (st.find(after)!=st.end() ? "Yes" : "No") << endl;
	return 0;
}
