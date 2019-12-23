#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool ok(vector<int> &a, vector<int> &b) {
	int n=a.size();
	for (int bt=1; bt<(1<<n)-1; bt++) {
		ll diff=0;
		for (int i=0; i<n; i++)
			if(bt&(1<<i))
				diff+=a[i]-b[i];
		if(!diff) return false;
	}
	return true;
}

int rnd(int x) {
	return rand()%x;
}

vector<int> rotate(vector<int> a) {
	int n=a.size();
	vector<int> ret(n);
	for (int i=0; i<n; i++)
		ret[i]=a[(i+1)%n];
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	vector<int> a_sorted=a;
	sort(a_sorted.begin(), a_sorted.end());
	vector<int> b=a_sorted;
	for (int i=0; i<n; i++) {
		b=rotate(b);
		if(ok(a_sorted,b)) {
			map<int,int> mp;
			for (int i=0; i<n; i++)
				mp[a_sorted[i]]=b[i];
			for (auto x : a)
				cout << mp[x] << " ";
			cout << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
