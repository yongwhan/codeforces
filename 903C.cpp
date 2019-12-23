#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a; cin>>n;
	map<int,int> mp;
	for (int i=0; i<n; i++) {
		cin>>a;
		mp[a]++;
	}

	int ret=0;
	while(1) {
		if(mp.empty()) break;
		map<int,int> mp2;
		for (auto it=mp.begin(); it!=mp.end(); it++) {
			int key=(*it).first, val=(*it).second;
			val--;
			if(val)
				mp2[key]=val;
		}
		mp=mp2;
		ret++;
	}
	cout << ret << endl;
	return 0;
}
