#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(string s, int gold) {
	for (int i=0; i<s.size(); i++)
		if(s[i]=='S')
			s[i]=' ';
	stringstream ss(s);
	int ret=0;
	string tmp;
	while(ss>>tmp) {
		int sz=tmp.size();
		if(sz<gold) sz++;
		ret=max(ret,sz);
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int gold=0;
	string s; cin>>s;
	for (int i=0; i<n; i++)
		if(s[i]=='G')
			gold++;
	if(gold==n) {
		cout << n << endl;
		return 0;
	}
	int ret=eval(s, gold);
	for (int i=1; i<n-1; i++) {
		if(s[i]=='S'&&s[i-1]=='G'&&s[i+1]=='G') {
			int left=0, right=0;
			for (int j=1; j<=i; j++) {
				if(s[i-j]=='S') break;
				left++;
			}

			for (int j=1; i+j<n; j++) {
				if(s[i+j]=='S') break;
				right++;
			}

			int inc=left+right;
			if(inc<gold)
				inc++;
			ret=max(ret,inc);
		}
	}
	cout << ret << endl;
	return 0;
}
