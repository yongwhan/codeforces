#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

map<int,int> memo;
map<int,vector<int>> ch;

int eval(int cur) {
	if(ch[cur].empty()) return memo[cur]=1;
	int val=0;
	for (const auto &nxt : ch[cur])
		eval(nxt), val+=memo[nxt];
	return memo[cur]=val;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n;
	for (int i=2; i<=n; i++)
		cin>>x, ch[x].push_back(i);
	eval(1);
	vector<int> ret(n);
	for (int i=1; i<=n; i++)
		ret[i-1]=memo[i];
	sort(ret.begin(),ret.end());
	for (int i=0; i<n; i++) {
		if(i) cout<<" ";
		cout<<ret[i];
	}
	cout<<endl;
	return 0;
}
