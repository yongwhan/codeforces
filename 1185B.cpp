#include<bits/stdc++.h>
using namespace std;

typedef pair<char,int> ci;

vector<ci> eval(string s) {
	s+="@";
	vector<ci> ret;
	int n=s.size(), cur=1;
	for (int i=1; i<n; i++)
		if(s[i]==s[i-1]) cur++;
		else ret.push_back({s[i-1],cur}), cur=1;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	while(n--) {
		string s,t; cin>>s>>t;
		vector<ci> x=eval(s), y=eval(t);
		if(x.size()!=y.size()) {
			cout<<"NO"<<endl;
			continue;
		}
		bool bad=false;
		for (int i=0; i<x.size(); i++)
			if(x[i].second>y[i].second||x[i].first!=y[i].first)
				bad=true;
		cout<<(bad?"NO":"YES")<<endl;
	}
	return 0;
}
