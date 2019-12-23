#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1e5+777;
set<int> ret;
vector<int> col(mx);
vector<vector<int>> child(mx);

bool ok(int cur) {
	if(!col[cur])
		return false;
	for (auto nxt : child[cur])
		if(!col[nxt])
			return false;
	return true;
}

void eval(int cur) {
	if(ok(cur))
		ret.insert(cur+1);
	if(child[cur].empty())
		return;
	for (auto nxt : child[cur])
		eval(nxt);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,rt=-1; cin>>n;
	for (int i=0; i<n; i++) {
		int p,c; cin>>p>>col[i];
		if(p==-1) {
			rt=i;
			continue;
		}
		p--;
		child[p].push_back(i);
	}

	eval(rt);
	if(ret.empty()) {
		cout << -1 << endl;
		return 0;
	}

	for (auto x : ret)
		cout << x << " ";
	cout << endl;
	return 0;
}
