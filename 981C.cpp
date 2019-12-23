#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,b, count=0, max_deg=0, max_idx=-1; cin>>n;
	map<int,int> deg;
	vector<int> leaf;
	for (int i=0; i<n-1; i++)
		cin>>a>>b,
		a--, b--,
		deg[a]++, deg[b]++;
	for (auto it : deg) {
		if(it.second==1)
			leaf.push_back(it.first);
		if(it.second>2) {
			count++;
			if(max_deg<it.second)
				max_deg=it.second,
				max_idx=it.first;
		}
	}
	if(count>1) {
		cout << "No" << endl;
		return 0;
	}
	cout << "Yes" << endl;
	if(count==0) {
		cout << 1 << endl << leaf[0]+1 << " " << leaf[1]+1 << endl;
		return 0;
	}

	cout << max_deg << endl;
	for (auto it : leaf)
		cout << it+1 << " " << max_idx+1 << endl;
	return 0;
}
