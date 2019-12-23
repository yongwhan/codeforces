#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x=0; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i], x+=a[i];
	x/=(n/2);
	for (int t=0; t<n/2; t++) {
		for (int i=0; i<n; i++) {
			if(a[i]==-1) continue;
			for (int j=i+1; j<n; j++)
				if(a[i]+a[j]==x)
					cout << i+1 << " " << j+1 << endl, a[i]=-1, a[j]=-1;
		}
	}
	return 0;
}
