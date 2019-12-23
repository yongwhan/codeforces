#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a; cin>>n;
	map<int,vector<int>> mp;
	for (int i=0; i<n; i++)
		cin>>a, mp[n-a].push_back(i);
	for (auto it : mp)
		if(it.second.size()%it.first) {
			cout << "Impossible" << endl;
			return 0;
		}
	map<int,int> b;
	int col=0;
	for (auto it : mp) {
		int sz=it.second.size();
		for (int i=0; i<sz; i++) {
			if(i%it.first==0) col++;
			b[it.second[i]]=col;
		}
	}
	cout << "Possible" << endl;
	for (auto it : b)
		cout << it.second << " ";
	cout << endl;
	return 0;
}
