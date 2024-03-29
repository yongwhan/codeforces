#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

typedef vector<int> vi;
#define LSOne(S) (S & (-S))

class FenwickTree {
	private:
		vi ft;

	public:
		FenwickTree() {}
		// initialization: n + 1 zeroes, ignore index 0
		FenwickTree(int n) { ft.assign(n + 1, 0); }

		int rsq(int b) {                                     // returns RSQ(1, b)
			int sum = 0; for (; b; b -= LSOne(b)) sum += ft[b];
			return sum; }

		int rsq(int a, int b) {                              // returns RSQ(a, b)
			return rsq(b) - (a == 1 ? 0 : rsq(a - 1)); }

		// adjusts value of the k-th element by v (v can be +ve/inc or -ve/dec)
		void adjust(int k, int v) {                    // note: n = ft.size() - 1
			for (; k < (int)ft.size(); k += LSOne(k)) ft[k] += v; }

		int getidx(int x) {
			int l=1, h=ft.size();
			while (l<h) { 
				int mid=(l+h)/2; 
				if (x<=rsq(mid)) h=mid; 
				else l=mid+1; 
			}
			return l;
		}
};


int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	FenwickTree ft(n);
	vector<int> a(n+1,-1);
	for (int i=0; i<n; i++)
		cin>>a[i+1];
	int m; cin>>m;
	vector<ii> v(m);
	map<int,set<int>> ans;
	for (int i=0; i<m; i++) {
		int k,pos; cin>>k>>pos;
		v[i]={k,pos};
		ans[k].insert(pos);
	}

	priority_queue<ii> pq;
	for (int i=1; i<=n; i++)
		pq.push({a[i],-i});
	map<int,int> mp;
	map<ii,int> ret;
	int ct=0;
	while(!pq.empty()) {
		ct++;
		ft.adjust(-pq.top().second,1);
		for (auto x : ans[ct])
			ret[{ct,x}]=a[ft.getidx(x)];
		pq.pop();
	}
	for (int i=0; i<m; i++)
		cout<<ret[v[i]]<<"\n";
	return 0;
}
