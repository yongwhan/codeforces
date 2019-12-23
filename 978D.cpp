#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(vector<ll> &a) {
	int n=a.size(), ret=0, d=a[1]-a[0], x=a[0];
	for (int i=0; i<n; i++) {
		int cur=abs(x-a[i]);
		if(cur>1)
			return -1;
		ret+=cur;
		x+=d;
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	if(n<=2) {
		cout << 0 << endl;
		return 0;
	}
	vector<ll> b(n);
	for (int i=0; i<n; i++)
		cin>>b[i];
	int ret=-1;
	for (int i=-1; i<=1; i++)
		for (int j=-1; j<=1; j++) {
			vector<ll> c=b;
			c[0]+=i;
			c[1]+=j;
			int cur=eval(c);
			if(cur!=-1) {
				if(i) cur++;
				if(j) cur++;
				if(ret==-1)
					ret=cur;
				else
					ret=min(ret,cur);
			}
		}
	cout << ret << endl;
	return 0;
}
