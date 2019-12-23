#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	vector<int> x(n+m), t(n+m);
	for (int i=0; i<n+m; i++) cin>>x[i];
	for (int i=0; i<n+m; i++) cin>>t[i];
	set<int> taxi;
	int j=0;
	map<int,int> idx;
	for (int i=0; i<n+m; i++)
		if(t[i])
			taxi.insert(x[i]), idx[x[i]]=j++;
	vector<int> ret(m,0);
	for (int i=0; i<n+m; i++) {
		if(!t[i]) {
			auto right=taxi.upper_bound(x[i]);
			if(right==taxi.end()) {
				ret[m-1]+=n+m-i; break;
			}
			else if(right==taxi.begin()) {
				ret[0]++;
			} else {
				auto left=right; left--;
				if(x[i]-*left<=*right-x[i]) ret[idx[*left]]++;
				else ret[idx[*right]]++;
			}
		}
	}
	for (auto it : ret)
		cout << it << " ";
	cout << endl;
	return 0;
}
