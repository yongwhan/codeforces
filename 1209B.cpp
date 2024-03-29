#include<bits/stdc++.h>
using namespace std;

const int mx=1e6+777;

bool on[107][mx];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	vector<int> a(n), b(n);
	for (int i=0; i<n; i++)
		cin>>a[i]>>b[i];
	for (int i=0; i<n; i++) {
		on[i][0]=(s[i]=='1');
		for (int j=1; j<b[i]; j++)
			on[i][j]=on[i][j-1];
		for (int j=b[i]; j<mx; j++)
			on[i][j]=((j-b[i])%a[i]==0)?!on[i][j-1]:on[i][j-1];
	}
	int ret=0;
	for (int j=0; j<mx; j++) {
		int cur=0;
		for (int i=0; i<n; i++)
			if(on[i][j])
				cur++;
		ret=max(ret,cur);
	}
	cout<<ret<<endl;
	return 0;
}
