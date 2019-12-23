#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k,cur=0; cin>>n>>k;
	map<int,int> ct;
	for (int i=0; i<62; i++)
		if(n&(1LL<<i)) ct[i]++, cur++;
	if(cur>k) {
		cout << "No" << endl; return 0;
	}

	while(1) {
		auto it=ct.rbegin();
		int key=it->first, val=it->second;
		if(val+cur>k) break;
		cur+=val;
		ct[key-1]+=2*val;
		ct.erase(key);
	}
	while(1) {
		auto it=ct.begin();
		int key=it->first, val=it->second;
		if(cur+1>k) break;
		cur++;
		ct[key-1]+=2;
		ct[key]--;
		if(!ct[key]) ct.erase(key);
	}
	cout << "Yes" << endl;
	for (auto it=ct.rbegin(); it!=ct.rend(); it++)
		for (int i=0; i<it->second; i++)
			cout << it->first << " ";
	cout << endl;
	return 0;
}
