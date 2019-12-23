#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; string s; cin>>n>>s;
	for (int i=0; i<n-1; i++)
		if(s[i]>s[i+1]) {
			cout<<"YES"<<endl<<i+1<<" "<<i+2<<endl;
			return 0;
		}
	cout<<"NO"<<endl;
	return 0;
}
