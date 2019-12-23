#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,u; cin>>n;
	map<int,int> ct, ct2;
	int ret=0;
	for (int i=0; i<n; i++) {
		cin>>u; ct[u]++;
		if(ct[u]>1) {
			ct2[ct[u]-1]--;
			if(!ct2[ct[u]-1])
				ct2.erase(ct[u]-1);
		}
		ct2[ct[u]]++;
		if(ct.size()==n)
			ret=i+1;
		if(ct2.size()==2) {
			int mn=INT_MAX, mx=INT_MIN;
			vector<int> key;
			for (auto it : ct2)
				key.push_back(it.first);
			if (ct2[key[0]]==1)
				if (key[0]-1==key[1])
					ret=i+1;
			if (ct2[key[1]]==1)
				if (key[0]==key[1]-1)
					ret=i+1;
			if (ct2[key[0]]==1)
				if (key[0]==1)
					ret=i+1;
		} else if(ct.size()==1)
			ret=i+1;
	}
	cout<<ret<<"\n";
	return 0;
}
