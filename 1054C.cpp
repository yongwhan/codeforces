#include<bits/stdc++.h>
using namespace std;

bool bad(vector<int> &p, vector<int> &l, int n) {
	for (int i=0; i<n; i++) {
		int cur=0;
		for (int j=0; j<i; j++)
			if(p[j]>p[i])
				cur++;
		if(l[i]!=cur)
			return true;
	}
	return false;
}

bool eval(vector<int> p, vector<int> l, vector<int> r, int n) {
	if(bad(p,l,n))
		return false;
	reverse(p.begin(), p.end());
	reverse(r.begin(), r.end());
	if(bad(p,r,n))
		return false;
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> l(n), r(n), p(n);
	for (int i=0; i<n; i++) cin>>l[i];
	for (int i=0; i<n; i++) cin>>r[i];
	for (int i=0; i<n; i++) p[i]=n-l[i]-r[i];
	if(!eval(p,l,r,n)) {
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	for (auto it : p)
		cout << it << " ";
	cout << endl;
	return 0;
}
