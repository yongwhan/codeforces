#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<int> a(n), b(n);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<n; i++) cin>>b[i];

	map<int,int> mx;
	for (int i=0; i<n; i++)
		mx[a[i]]=max(mx[a[i]],b[i]);
	set<int> done;
	priority_queue<int> pq;
	for (int i=0; i<n; i++) {
		if(mx[a[i]]==b[i] && done.find(a[i])==done.end()) {
			done.insert(a[i]);
		} else {
			pq.push(-b[i]);
		}
	}
	ll ret=0;
	for (int i=0; i<k-done.size(); i++) {
		int cur=pq.top(); pq.pop();
		ret+=-cur;
	}
	cout << ret << endl;
	return 0;
}
