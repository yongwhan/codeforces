#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n), b(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	for (int i=0; i<n; i++)
		cin>>b[i];
	vector<ii> ret;
	for (int i=0; i<n; i++) {
		if(a[i]!=b[i]) {
			int t=-1;
			for (int j=i+1; j<n; j++) {
				if(b[j]==a[i]) {
					t=j; break;
				}
			}
			for (int j=t; j>i; j--)
				ret.push_back({j+1,j}),
				swap(b[j],b[j-1]);
		}
	}
	cout << ret.size() << endl;
	for (auto it : ret)
		cout << it.second << " " << it.first << endl;
	return 0;
}
