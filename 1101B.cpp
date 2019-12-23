#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size();
	int idx=-1, idx2=-1;
	for (int i=0; i<n; i++) {
		if(s[i]=='[') { idx=i; break; }
	}

	int idx3=-1, idx4=-1;
	for (int i=idx; i<n; i++) {
		if(s[i]==':') { idx3=i; break; }
	}

	for (int i=n-1; i>=0; i--) {
		if(s[i]==']') { idx2=i; break; }
	}

	for (int i=idx2; i>=0; i--) {
		if(s[i]==':') { idx4=i; break; }
	}

	if(idx3>=idx4||idx==-1||idx2==-1||idx3==-1||idx4==-1) {
		cout << -1 << endl;
		return 0;
	}

	int ret=4;
	for (int i=idx3; i<=idx4; i++)
		if(s[i]=='|')
			ret++;
	cout << ret << endl;
	return 0;
}
