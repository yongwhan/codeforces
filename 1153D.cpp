#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=3e5+777;
vector<int> col(mx);
vector<vector<int>> child(mx);

int eval(int cur) {
	int ret;
	if(child[cur].empty())
		return 0;

	if(col[cur]) {
		ret=-(child[cur].size()-1);
		for (auto nxt : child[cur])
			ret+=eval(nxt);
	} else {
		ret=-1e9;
		for (auto nxt : child[cur])
			ret=max(ret,eval(nxt));
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,p; cin>>n;
	for (int i=0; i<n; i++)
		cin>>col[i], col[i]=1-col[i];

	for (int i=1; i<n; i++)
		cin>>p, p--, child[p].push_back(i);

	int ret=eval(0);
	for (int i=0; i<n; i++)
		if(child[i].empty())
			ret++;
	cout << ret << endl;
	return 0;
}
