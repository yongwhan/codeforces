#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int thres=77, mx=2e5+5;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,v,t,p; cin>>n>>v;
	v=min(v,2*n);
	priority_queue<ii> ka, ca;
	map<int,int> _ka, _ca;
	vector<ii> __ka, __ca;
	for (int i=1; i<=n; i++) {
		cin>>t>>p;
		ii cur={p,i};
		if(t==1) __ka.push_back(cur);
		else __ca.push_back(cur);
	}

	sort(__ka.begin(),__ka.end(),greater<ii>());
	sort(__ca.begin(),__ca.end(),greater<ii>());

	int nk=__ka.size(), nc=__ca.size();
	__ka.resize(min(nk,v));
	__ca.resize(min(nc,v/2));

	for (auto x : __ka)
		ka.push(x), _ka[x.second]=x.first;
	for (auto x : __ca)
		ca.push(x), _ca[x.second]=x.first;

	int val=0;
	vector<int> ret;
	while(1) {
		if(v<thres) break;
		if((ka.size()+ca.size())<thres) break;
		int x=0, y=0;
		vector<ii> u;
		ii a;
		for (int i=0; i<2; i++)
			if(!ka.empty())
				a=ka.top(), ka.pop(), x+=a.first, u.push_back(a);
		if(!ca.empty())
			a=ca.top(), y+=a.first;
		if(x>=y) {
			val+=x;
			for (auto t : u)
				ret.push_back(t.second),
				_ka.erase(_ka.find(t.second));
		}
		else {
			val+=y; ca.pop();
			for (auto t : u)
				ka.push(t);
			ret.push_back(a.second);
			_ca.erase(_ca.find(a.second));
		}
		v-=2;
	}

	vector<int> weight, value, index;
	map<int,int> mp;
	int iter=0;
	for (auto x : _ka)
		weight.push_back(1), value.push_back(x.second), index.push_back(x.first), mp[x.first]=iter++;
	for (auto x : _ca)
		weight.push_back(2), value.push_back(x.second), index.push_back(x.first), mp[x.first]=iter++;
	n=weight.size();
	int dp[n+5][v+5];
	for (int i=0; i<=n; i++) {
		for (int j=0; j<=v; j++) {
			if(i==0||j==0) dp[i][j]=0;
			else if(weight[i-1]<=j) dp[i][j]=max(value[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);
			else dp[i][j]=dp[i-1][j];
		}
	}

	val+=dp[n][v];
	int cur=v;
	for (int i=n; i>=1; i--) {
		if(dp[i][cur]>dp[i-1][cur])
			ret.push_back(index[i-1]),
			cur-=weight[i-1];
	}
	cout << val << endl;
	sort(ret.begin(),ret.end());
	for (auto x : ret)
		cout << x << " ";
	cout << endl;
	return 0;
}
