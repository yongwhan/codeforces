#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n; string s; cin>>n>>s;
		vector<int> v;
		for (int i=0; i<s.size(); i++)
			if(s[i]=='1')
				v.push_back(i+1);
		cout<<(v.empty()?n:max(v.back(),n-v.front()+1)*2)<<endl;
	}
	return 0;
}
