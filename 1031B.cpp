#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1e5+777;

int a[mx], b[mx], t[mx];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	for (int i=0; i<n-1; i++)
		cin>>a[i];
	for (int i=0; i<n-1; i++)
		cin>>b[i];
	for (int i=0; i<4; i++) {
		t[0]=i;
		bool ok=true;
		for (int j=1; j<n; j++) {
			t[j]=a[j-1]+b[j-1]-t[j-1];
			if(((t[j]|t[j-1])!=a[j-1])||((t[j]&t[j-1])!=b[j-1])) {
				ok=false;
				break;
			}
		}
		if(ok) {
			cout << "YES" << endl;
			for (int i=0; i<n; i++)
				cout << t[i] << " ";
			cout << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
