#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size(), idx=-1;
	for (int i=n-1; i>=0; i--)
		if(s[i]=='#') {
			idx=i;
			break;
		}
	map<int,int> ret;
	int diff=0;
	for (int i=0; i<idx; i++)
		if(s[i]=='#')
			ret[i]=1, diff--;
	for (int i=0; i<n; i++) {
		char ch=s[i];
		if(ch=='(') diff++;
		else if(ch==')') diff--;
	}
	if(diff<=0) {
		cout << -1 << endl;
		return 0;
	}
	ret[idx]=diff;

	diff=0;
	for (int i=0; i<n; i++) {
		char ch=s[i];
		if(ret.find(i)==ret.end()) {
			if(ch=='(') diff++;
			else if(ch==')') diff--;
		} else {
			diff-=ret[i];
		}
		if(diff<0) {
			cout << -1 << endl;
			return 0;
		}
	}
	if(diff) {
		cout << -1 << endl;
		return 0;
	}
	for (auto it : ret)
		cout << it.second << endl;
	return 0;
}
