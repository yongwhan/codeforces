#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,last=-1,ret=-1; cin>>n>>m; m+=2;
	vector<set<int>> v(n);
	for (int i=0; i<n; i++) {
		string s; cin>>s;
		for (int j=0; j<m; j++)
			if(s[j]=='1')
				v[n-1-i].insert(j);
	}
	vector<bool> has(n,false);
	has[n-1]=false;
	for (int i=n-2; i>=0; i--)
		has[i]=has[i+1]||(!v[i+1].empty());
	for (int i=n-1; i>=0; i--) {
		if(!v[i].empty()) {
			last=i;
			break;
		}
	}
	for (int bt=0; bt<(1<<n); bt++) {
		bool left=true;
		int cur=0;
		for (int i=0; i<n; i++) {
			int mn,mx;
			if(!v[i].empty())
				mn=*v[i].begin(), mx=*v[i].rbegin();
			else {
				if(left) mn=0, mx=0;
				else mn=m-1, mx=m-1;
			}
			if(i!=last) {
				if(bt&(1<<i)) {
					if(left) cur+=m-1;
					else cur+=2*(m-1-mn);
					left=false;
				}
				else {
					if(left) cur+=2*mx;
					else cur+=m-1;
					left=true;
				}
			} else {
				if(left) cur+=mx;
				else cur+=m-1-mn;
			}
			if(has[i]) cur++;
		}
		if(ret==-1) ret=cur;
		else ret=min(ret,cur);
	}
	cout << ret << endl;
	return 0;
}
