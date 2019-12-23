#include<bits/stdc++.h>
using namespace std;

bool ok(vector<int> &p) {
	int n=p.size();
	for (int t=0; t<2; t++) {
		int i;
		for (i=0; i<n; i++)
			if(p[i]==1) break;
		bool ok=true;
		for (int j=0; j<n; j++) {
			int k=(i+j)%n;
			if(p[k]!=j+1) {
				ok=false; break;
			}
		}
		if(ok) return true;
		reverse(p.begin(),p.end());
	}
	return false;
}

int main() {
	int q; cin>>q;
	while(q--) {
		int n; cin>>n;
		vector<int> p(n);
		for (int i=0; i<n; i++)
			cin>>p[i];
		cout<<(ok(p)?"YES":"NO")<<endl;
	}
	return 0;
}
