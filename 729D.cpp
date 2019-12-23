#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,b,k; cin>>n>>a>>b>>k;
	string s; cin>>s;
	vector<int> ret;
	int t=1;
	for (int i=0; i<n; i++) {
		if(s[i]=='1') t=0;
		else if(t==b) t=0, ret.push_back(i+1);
		t++;
	}
	int sz=ret.size()-a+1;
	cout << sz << endl;
	for (int i=0; i<sz; i++)
		cout << ret[i] << " ";
	cout << endl;
	return 0;
}
