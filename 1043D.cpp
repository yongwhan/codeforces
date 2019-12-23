#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m; cin>>n>>m;
	vector<vector<int>> v(m, vector<int>(n));
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin>>v[i][j];
	vector<map<int,int>> w(m);
	for (int i=0; i<m; i++)
		for (int j=0; j<n-1; j++)
			w[i][v[i][j]]=v[i][j+1];
	ll ret=0, cur=1;
	for (int i=0; i<n-1; i++) {
		int key=v[0][i], value=v[0][i+1];
		bool ok=true;
		for (int j=0; j<m; j++)
			if(w[j][key]!=value) {
				ok=false; break;
			}
		if(!ok) {
			ret+=cur*(cur+1)/2;
			cur=1;
		} else cur++;
	}
	ret+=cur*(cur+1)/2;
	cout << ret << endl;
	return 0;
}
