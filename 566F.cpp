#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

const int mx=1e6+777;
vector<int> dist(mx,0);
vector<int> p;
vector<bool> flag(mx,true);
unordered_map<int,int> ct;
vector<ii> factors;

void eval(int x, int n, int i) {
	for (int j=i; j<factors.size(); j++) {
		int t=factors[j].first*n;
		for (int k=0; k<factors[j].second; k++) {
			if(t<x)
				dist[x]=max(dist[x],1+dist[t]);
			eval(x,t,j+1);
			t*=factors[j].first;
		}
	}
}

void get_pf(int x) {
	for (int i=0; p[i]*p[i]<=x; i++) {
		int e=0;
		while(x%p[i]==0)
			e++, x/=p[i];
		if(e>0)
			factors.push_back({p[i],e});
	}
	if(x>1)
		factors.push_back({x,1});
}

int doit(int x) {
	ct.clear();
	factors.clear();
	get_pf(x);
	dist[x]=1+dist[1];
	eval(x,1,0);
	return dist[x];
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; scanf("%d", &n);
	flag[0]=flag[1]=false;
	for (int i=2; i*i<mx; i++)
		if(flag[i])
			for (int j=i; j*i<mx; j++)
				flag[i*j]=false;

	for (int i=0; i<mx; i++)
		if(flag[i])
			p.push_back(i);

	vector<int> a(n);
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
	sort(a.begin(), a.end());
	int ret=0;
	for (auto x : a)
		ret=max(ret,doit(x));
	cout << ret << endl;
	return 0;
}
