#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	string s; cin>>s;
	s+='@'; n++;
	int ret=0;
	for (char ch='a'; ch<='z'; ch++) {
		int cur=0, val=0;
		for (int i=0; i<n; i++) {
			if(s[i]!=ch) val+=cur/k, cur=0;
			else cur++;
		}
		ret=max(ret,val);
	}
	cout << ret << endl;
	return 0;
}
