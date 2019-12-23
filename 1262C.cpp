#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n,k; cin>>n>>k;
		string s; cin>>s;
		string t;
		for (int i=0; i<k-1; i++)
			t+="()";
		int m=n-2*(k-1);
		t+=string(m/2,'(');
		t+=string(m/2,')');
		cout<<n<<"\n";
		for (int i=0; i<n; i++) {
			for (int j=i; j<n; j++) {
				if(t[i]==s[j]) {
					reverse(s.begin()+i,s.begin()+j+1);
					cout<<i+1<<" "<<j+1<<"\n";
					break;
				}
			}
		}
	}
	return 0;
}
