#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string eval(string &s, unordered_set<int> &st) {
	int n=s.size();
	string ret;
	for (int i=0; i<n; i++)
		if(st.find(i)==st.end()) ret+=s[i];
	return ret;
}

bool ok(int x, vector<int> &v, string &_s, string &t) {
	unordered_set<int> forbid(v.begin(), v.begin()+x);
	string s=eval(_s, forbid);
	int n=s.size(), m=t.size(), i=0, j=0;
	while(1) {
		if(j>=m) return true;
		while(1) {
			if(i>=n) return false;
			if(s[i]==t[j]) { i++; j++; break; }
			else i++;
		}
	}
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	int n=s.size();
	vector<int> v(n);
	for (int i=0; i<n; i++) cin>>v[i], v[i]--;
	int lo=0, hi=n, mid=-1;
	for (int i=0; i<log(n)/log(2)+1; i++) {
		mid=(hi+lo)/2;
		if(ok(mid,v,s,t)) lo=mid;
		else hi=mid-1;
	}

	int ret=lo, tmp=lo;
	for (int i=0; i<2; i++) {
		if(ok(tmp,v,s,t)) ret=tmp;
		tmp=min(n, tmp+1);
	}
	cout << ret << endl;
	return 0;
}
