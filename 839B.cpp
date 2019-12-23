#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k, cur=0,a; cin>>n>>k;
	vector<int> has(5,0), ct(5,0);
	has[2]=2*n, has[4]=n;
	bool ok=true;
	for (int i=0; i<k; i++) {
		cin>>a, cur+=(a+1)/2;
		while(a>=3) {
			if(has[4]) a=max(0,a-4), has[4]--;
			else if(has[2]) a=max(0,a-2), has[2]--;
			else ok=false;
		}
		if(a) ct[a]++;
	}
	while(ct[2]) {
		if(has[2]) has[2]--;
		else if(has[4]) has[4]--, has[1]++;
		else ct[1]+=2;
		ct[2]--;
	}
	if(ct[1]>has[1]+has[2]+has[4]*2) ok=false;
	if(ok) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
