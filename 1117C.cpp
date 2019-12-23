#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool ok(ll ct, vector<ll> &dx, vector<ll> &dy, ll x, ll y, ll n) {
	ll q=ct/n, r=ct%n;
	x-=dx[n]*q+dx[r];
	y-=dy[n]*q+dy[r];
	return abs(x)+abs(y)<=ct;
}

const ll inf=1LL<<62;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
	int n; cin>>n;
	string s; cin>>s;
	vector<ll> dx(n+1,0), dy(n+1,0);
	for (int i=1; i<=n; i++) {
		switch(s[i-1]) {
			case 'U':
				dy[i]++;
				break;
			case 'D':
				dy[i]--;
				break;
			case 'L':
				dx[i]--;
				break;
			default:
				dx[i]++;
		}
	}

	ll u=x2-x1, v=y2-y1;
	set<char> st(s.begin(), s.end());
	char ch=*st.begin();
	for (int i=1; i<=n; i++)
		dx[i]+=dx[i-1],
		dy[i]+=dy[i-1];
	ll low=0, high=inf;
	for (int i=0; i<100; i++) {
		ll mid=(low+high)/2;
		if(ok(mid,dx,dy,u,v,n)) high=mid;
		else low=mid+1;
	}
	cout << (high==inf ? -1 : high) << endl;
	return 0;
}
