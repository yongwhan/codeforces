#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

vector<ii> eval(string &s, string &t, int n) {
	vector<ii> ret;
	for (int iter=0; iter<1000; iter++) {
		if(s==t) break;
		int x=-1;
		for (int i=0; i<n; i++)
			if(s[i]!=t[i]) {
				x=i; break;
			}
		int y=-1;
		for (int i=0; i<n; i++)
			if(s[x]==s[i]&&i!=x&&s[i]!=t[i]) {
				y=i; break;
			}
		if(y!=-1) {
			ret.push_back({x,y});
			swap(s[x],t[y]);
			continue;
		}
		int z=-1;
		for (int i=0; i<n; i++)
			if(s[x]==t[i]&&i!=x&&s[i]!=t[i]) {
				z=i; break;
			}
		if(z==-1)
			return {};
		ret.push_back({z,z});
		swap(s[z],t[z]);
		ret.push_back({x,z});
		swap(s[x],t[z]);
	}
	if(ret.size()>2*n)
		return {};
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		string s,t; cin>>s>>t;
		if(s==t) {
			cout<<"Yes\n"; continue;
		}
		vector<ii> ret=eval(s,t,n);
		if(ret.empty()) {
			cout<<"No\n"; continue;
		}
		cout<<"Yes\n";
		cout<<ret.size()<<"\n";
		for (const auto p : ret)
			cout<<p.first+1<<" "<<p.second+1<<"\n";
	}
	return 0;
}
