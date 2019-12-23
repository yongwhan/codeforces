#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string init = "What are you doing at the end of the world? Are you busy? Will you save us?";
string s = "What are you doing while sending";
string t = "Are you busy? Will you send";
char ss='\"', tt='?', uu=' ';

vector<ll> length;
const ll inf=3e18;

string next(string &f) {
	return s + uu + ss + f + ss + tt + uu + t + uu + ss + f + ss + tt;
}

ll len(ll x) {
	if(x>=length.size()) return inf;
	return length[x];
}

map<ii,char> mp;

char eval(int x, ll k) {
	int n=s.size(), m=t.size(), l=init.size();
	if(k>=len(x)) return '.';
	if(x==0) return init[k];

	if(k<n) return s[k];
	k-=n;

	if(k==0) return uu;
	k--;
	if(k==0) return ss;
	k--;

	ll o=len(x-1);
	ii key=make_pair(x-1,k);
	if(mp.find(key)!=mp.end()) return mp[key];
	if(k<o) return eval(x-1,k);
	k-=o;

	if(k==0) return ss;
	k--;
	if(k==0) return tt;
	k--;
	if(k==0) return uu;
	k--;

	if(k<m) return t[k];
	k-=m;

	if(k==0) return uu;
	k--;
	if(k==0) return ss;
	k--;

	o=len(x-1);
	key=make_pair(x-1,k);
	if(mp.find(key)!=mp.end()) return mp[key];
	if(k<o) return eval(x-1,k);
	k-=o;

	if(k==0) return ss;
	k--;
	if(k==0) return tt;
	k--;

	return ' ';
}

char eval2(int x, ll k) {
	while(x>=100) {
		x--; k-=34;
		if(k<0) { k+=34; break; }
	}
	return eval(x,k);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll cur=init.size();
	for (int i=0; i<1e5+5; i++) {
		if(cur>2*1e18) break;
		length.push_back(cur);
		cur=cur*2 + 68;
	}
	int q; cin>>q;
	while(q--) {
		ll n,k; cin>>n>>k;
		if(n<100) cout << eval(n,k-1);
		else cout << eval2(n,k-1);
	}
	cout << endl;
	return 0;
}
