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
		vector<int> p(n);
		map<int,int> ct, cum, mp;
		for (int i=0; i<n; i++)
			cin>>p[i], ct[p[i]]++;
		int cur=0;
		for (map<int,int>::reverse_iterator it=ct.rbegin(); it!=ct.rend(); it++) {
			cur+=it->second;
			cum[it->first]=cur;
		}
		for (auto it : cum)
			mp[it.second]=it.first;
		vector<int> ret(3,0);
		int sum=0;
		for (auto it : mp) {
			set<int> st;
			int g=it.first;
			st.insert(it.second);
			auto silver=mp.lower_bound(g+g+1);
			int s=(silver->first)-g;
			st.insert(silver->second);
			auto bronze=mp.upper_bound(n/2);
			if(bronze==mp.begin())
				continue;
			bronze--;
			int b=(bronze->first)-g-s;
			st.insert(bronze->second);
			auto rest=mp.lower_bound(s+g+b+1);
			st.insert(rest->second);

			if(g<=0||s<=0||b<=0)
				continue;
			if(g>=s||g>=b)
				continue;
			if(2*(g+s+b)>n)
				continue;
			if(st.size()<4)
				continue;
			int cur=g+s+b;
			if(sum<cur)
				sum=cur, ret[0]=g, ret[1]=s, ret[2]=b;
		}
		cout<<ret[0]<<" "<<ret[1]<<" "<<ret[2]<<"\n";
	}
	return 0;
}
