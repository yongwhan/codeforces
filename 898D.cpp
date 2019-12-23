#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1e6+5;
bool flag[mx];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	for (int i=0; i<mx; i++)
		flag[i]=false;
	int n,m,k,x; cin>>n>>m>>k;
	for (int i=0; i<n; i++) {
		cin>>x;
		flag[x]=true;
	}
	int ret=0;
	deque<int> dq;
	for (int i=1; i<=m; i++)
		if(flag[i])
			dq.push_back(i);
	while(dq.size()>=k) {
		int x=dq.back();
		flag[x]=false;
		dq.pop_back();
		ret++;
	}

	for (int i=m+1; i<=1e6; i++) {
		if(flag[i]) dq.push_back(i);
		if(flag[i-m]) dq.pop_front();
		while(dq.size()>=k) {
			int x=dq.back();
			flag[x]=false;
			dq.pop_back();
			ret++;
		}
	}
	cout << ret << endl;
	return 0;
}
