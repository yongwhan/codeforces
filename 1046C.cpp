#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=2e5+777;
int s[mx], p[mx];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,d; cin>>n>>d;
	for (int i=0; i<n; i++)
		cin>>s[i+1];
	for (int i=0; i<n; i++)
		cin>>p[i+1];
	s[d]+=p[1];
	int k=0, l=d-1;
	for (int i=2; i<=n&&l; i++)
		if(s[l]+p[i]<=s[d])
			k++, l--;
	cout << d-k << endl;
	return 0;
}
