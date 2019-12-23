#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,l,r; cin>>n;
	map<int,int> left,right;
	vector<int> start;
	for (int i=1; i<=n; i++) {
		cin>>l>>r, right[i]=r;
		if(!l) start.push_back(i);
	}
	vector<int> ret;
	ret.push_back(0);
	for (auto x : start) {
		ret.push_back(x);
		while(1) {
			x=right[x];
			if(!x) break;
			ret.push_back(x);
		}
	}
	ret.push_back(0);
	for (int i=1; i<=n; i++) left[ret[i]]=ret[i-1], right[ret[i]]=ret[i+1];
	for (int i=1; i<=n; i++) cout << left[i] << " " << right[i] << endl;
	return 0;
}
