#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int inf=1e9;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	string b; cin>>b;
	multiset<int> window;
	for (int i=0; i<4; i++)
		window.insert(a[i]);
	int r=inf, l=-inf;
	for (int i=4; i<n; i++) {
		window.insert(a[i]);
		if(b[i]=='1') {
			if(b[i-1]=='0'&&b[i-2]=='0'&&b[i-3]=='0'&&b[i-4]=='0')
				l=max(l,*window.rbegin()+1);
		} else {
			if(b[i-1]=='1'&&b[i-2]=='1'&&b[i-3]=='1'&&b[i-4]=='1')
				r=min(r,*window.begin()-1);
		}
		window.erase(window.find(a[i-4]));
	}
	cout << l << " " << r << endl;
	return 0;
}
