#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool sub(const string &s, const string &t) {
	int n=s.size(), m=t.size(), i=0;
	for (int j=0; j<n; j++) {
		if(i==t.size()) break;
		if(s[j]==t[i]) i++;
	}
	return i==t.size();
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	int n=s.size(), ret=0;
	for (int i=0; i<n; i++)
		for (int j=i; j<n; j++) {
			string u;
			for (int k=0; k<i; k++) u+=s[k];
			for (int k=j+1; k<n; k++) u+=s[k];
			if(sub(u,t))
				ret=max(ret,j-i+1);
		}
	cout<<ret<<endl;
	return 0;
}
