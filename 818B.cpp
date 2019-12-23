#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<int> l(m);
	for (int i=0; i<m; i++)
		cin>>l[i];
	map<int,int> a;
	set<int> left;
	for (int i=1; i<=n; i++)
		left.insert(i);
	for (int i=0; i<m-1; i++) {
		int x=(l[i+1]-l[i]+n)%n;
		if(x==0)
			x=n;

		if(a.find(l[i])!=a.end()) {
			if(a[l[i]]!=x) {
				cout << -1 << endl;
				return 0;
			}
		} else {
			if(left.find(x)==left.end()) {
				cout << -1 << endl;
				return 0;
			}
			a[l[i]]=x, left.erase(x);
		}
	}
	for (int i=1; i<=n; i++) {
		if(a.find(i)!=a.end()) cout << a[i] << " ";
		else cout << *left.begin() << " ", left.erase(left.begin());
	}
	cout << endl;
	return 0;
}
