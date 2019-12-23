#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> &v) {
	for (auto w : v)
		cout << w.size() << " ";
	for (auto w : v)
		for (auto x : w)
			cout << x << " ";
	cout << endl;
	cout.flush();
}

int process(int n) {
	queue<vector<int>> q;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		a[i]=i+1;
	q.push(a);

	int ret=0;
	while(!q.empty()) {
		int sz=q.size();
		vector<vector<int>> v(2);
		while(sz--) {
			vector<vector<int>> w(2);
			vector<int> cur=q.front(); q.pop();
			int iter=0;
			for (auto x : cur)
				w[iter].push_back(x),
				iter=1-iter;
			for (auto u : w)
				if(u.size()>1)
					q.push(u);
			for (int i=0; i<2; i++)
				for (auto x : w[i])
					v[i].push_back(x);
		}
		print(v);
		int val; cin>>val;
		ret=max(ret,val);
	}
	return ret;
}

int main() {
	int t,n; cin>>t;
	while(t--) {
		cin>>n;
		int ret=process(n);
		cout << -1 << " " << ret << endl;
		cout.flush();
	}
	return 0;
}
