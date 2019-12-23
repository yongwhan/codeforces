#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll sum=0;
	int n; cin>>n;
	vector<int> a(n);
	map<ll,int> ct;
	for (int i=0; i<n; i++)
		cin>>a[i], sum+=a[i], ct[a[i]]++;
	set<int> ret;
	for (int i=0; i<n; i++) {
		ct[a[i]]--;
		sum-=a[i];
		if(sum%2==0) {
			if(ct[sum/2])
				ret.insert(i+1);
		}
		sum+=a[i];
		ct[a[i]]++;
	}
	cout << ret.size() << endl;
	for (auto it : ret)
		cout << it << " ";	
	cout << endl;
	return 0;
}
