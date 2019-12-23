#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n+1,-1);
	int ct=0;
	for (int i=2; i*i<=n; i++)
		if(a[i]==-1) {
			a[i]=++ct;
			for (int j=i; j*i<=n; j++)
				if(a[i*j]==-1)
					a[i*j]=ct;
		}
	for (int i=2; i<=n; i++)
		if(a[i]==-1)
			a[i]=++ct;
	for (int i=2; i<=n; i++)
		cout << a[i] << " ";
	cout << endl;		
	return 0;
}
