#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(int b, map<int,int> &ct) {
	int ret=0;
	for (auto it=ct.rbegin(); it!=ct.rend(); it++) {
		int a=it->first, x=min(it->second,b/a);
		b-=a*x;
		ret+=x;
	}
	if(!b)
		return ret;
	return -1;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,q,a,b; cin>>n>>q;
	map<int,int> ct, cache;
	for (int i=0; i<n; i++)
		cin>>a, ct[a]++;
	while(q--) {
		cin>>b;
		int ret=-1;
		if(cache.find(b)==cache.end())
			cache[b]=eval(b,ct);
		cout << cache[b] << endl;
	}
	return 0;
}
