#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int q; cin>>q;
	while(q--) {
		int n; cin>>n;
		vector<int> a(n);
		for (int i=0; i<n; i++)
			cin>>a[i];
		set<int> st;
		for (int i=0; i<n-1; i++)
			st.insert(i);
		for (int i=1; i<=n; i++) {
			int k=-1;
			for (int j=0; j<n; j++) {
				if(a[j]==i) {
					k=j; break;
				}
			}
			for (int j=k-1; j>=0; j--) {
				if(!st.count(j)) break;
				if(a[j]<a[j+1]) break;
				swap(a[j],a[j+1]);
				st.erase(j);
			}
		}
		for (int i=0; i<n; i++)
			cout<<a[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
