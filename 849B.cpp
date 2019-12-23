#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;

ll gcd(ll a, ll b) {
	if(!b) return a;
	else return gcd(b,a%b);
}

int eval(ii slope, vector<ii> &v) {
	ll g=gcd(slope.first,slope.second);
	slope.first/=g;
	slope.second/=g;
	set<ii> st;
	for (auto x : v) {
		ll cur=x.first/slope.first;
		x.first-=cur*slope.first;
		x.second-=cur*slope.second;
		st.insert(x);
	}
	return st.size();
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ii> v(n);
	set<ll> st;
	for (int i=0; i<n; i++)
		cin>>v[i].second, v[i].first=i, st.insert(v[i].second);
	if(st.size()==2) {
		cout << "Yes" << endl;
		return 0;
	}

	for (int i=1; i<n; i++) {
		ii cur={v[i].first-v[0].first, v[i].second-v[0].second};
		if(eval(cur, v)==2) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	if(eval({v[1].first-v[0].first,v[1].second-v[0].second},v)==1) {
		cout << "No" << endl;
		return 0;
	}
	
	for (int i=0; i<n; i++) {
		vector<ii> w=v;
		w.erase(w.begin()+i);
		if(eval({w[1].first-w[0].first,w[1].second-w[0].second},w)==1) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;
}
