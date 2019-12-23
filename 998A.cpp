#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int sum(vector<int> &x, vector<int> &a) {
	int ret=0;
	for (auto t : x) ret+=a[t];
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int bt=0; bt<(1<<n); bt++) {
		vector<int> x,y;
		for (int i=0; i<n; i++)
			if(bt&(1<<i)) x.push_back(i);
			else y.push_back(i);
		if(!x.empty()&&!y.empty()&&sum(x,a)!=sum(y,a)) {
			cout << x.size() << endl;
			for (auto t : x) cout << t+1 << " ";
			cout << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
