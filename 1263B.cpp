#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		vector<string> v(n);
		for (int i=0; i<n; i++)
			cin>>v[i];
		int ct=0;
		for (int i=0; i<n; i++) {
			bool bad=false;
			for (int j=0; j<n; j++) {
				if(i==j) continue;
				if(v[i]==v[j])
					bad=true;
			}
			if(!bad)
				continue;
			ct++;
			set<char> unused;
			for (char ch='0'; ch<='9'; ch++)
				unused.insert(ch);
			for (int j=0; j<n; j++) {
				if(i==j) continue;
				unused.erase(v[j].back());
			}
			v[i].back()=*unused.begin();
		}
		cout<<ct<<"\n";
		for (int i=0; i<n; i++)
			cout<<v[i]<<"\n";
	}
	return 0;
}
