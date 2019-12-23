#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool ok(map<int,int> &ct, int x) {
	for (auto it : ct)
		if(it.second%x)
			return false;
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<int,int> ct;
	int a;
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			cin>>a, ct[a]++;

	vector<vector<int>> g(n,vector<int>(n,0));
	if(n%2) {
		// center
		int idx=-1;
		for (auto it : ct)
			if(it.second%2)
				idx=it.first;
		g[n/2][n/2]=idx;
		ct[idx]--;
		if(!ct[idx])
			ct.erase(idx);

		// middle
		if(!ok(ct,2)) {
			cout << "NO" << endl;
			return 0;
		}

		for (int i=0; i<n/2; i++) {
			for (int j=0; j<2; j++) {
				idx=-1;
				for (auto it : ct)
					if(it.second%2==0&&it.second%4)
						idx=it.first;
				if(idx==-1) {
					for (auto it : ct)
						if(it.second%4==0)
							idx=it.first;
				}
				if(j)
					g[i][n/2]=g[n-1-i][n/2]=idx;
				else
					g[n/2][i]=g[n/2][n-1-i]=idx;
				ct[idx]-=2;
				if(!ct[idx])
					ct.erase(idx);
			}
		}
	}

	// corner
	if(!ok(ct,4)) {
		cout << "NO" << endl;
		return 0;
	}

	cout << "YES" << endl;
	for (int i=0; i<n/2; i++) {
		for (int j=0; j<n/2; j++) {
			int idx=ct.begin()->first;
			g[i][j]=g[n-1-i][j]=g[i][n-1-j]=g[n-1-i][n-1-j]=idx;
			ct[idx]-=4;
			if(!ct[idx])
				ct.erase(idx);
		}
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if(j) cout << " ";
			cout << g[i][j];
		}
		cout << endl;
	}
	return 0;
}
