#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	bool ok=false;
	for (int x=0; x<n; x++) {
		for (int y=x; y<n; y++) {
			bool cur=true;
			for (int i=0; i<x; i++)
				if(a[i]>=a[i+1]) cur=false;
			for (int i=x; i<y; i++)
				if(a[i]!=a[i+1]) cur=false;
			for (int i=y; i<n-1; i++)
				if(a[i]<=a[i+1]) cur=false;
			if(cur) ok=true;
		}
	}
	if(ok) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
