#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> p(n);
	for (int i=0; i<n; i++) cin>>p[i], p[i]--;

	for (int i=0; i<n; i++) {
		int cur=i;
		map<int,int> ct;
		while(1) {
			ct[cur]++;
			if(ct[cur]==2) {
				cout << cur+1 << " ";
				break;
			}
			cur=p[cur];
		}
	}
	cout << endl;
	return 0;
}
