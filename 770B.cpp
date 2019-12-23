#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

ll s2n(string &s) {
	stringstream ss(s);
	ll ret;
	ss>>ret;
	return ret;
}

int eval(string &s) {
	ll x=s2n(s);
	int ret=0;
	while(x)
		ret+=x%10, x/=10;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	if(s.size()==1) {
		cout << s << endl;
		return 0;
	}

	string ret=s;
	int n=s.size();
	for (int j=0; j<n; j++) {
		string t=s;
		if(t[j]>'0') {
			t[j]--;
			for (int i=j+1; i<n; i++)
				t[i]='9';
			if((eval(ret)<eval(t))||(eval(ret)==eval(t)&&s2n(ret)<s2n(t)))
				ret=t;
		}
	}
	cout << s2n(ret) << endl;
	return 0;
}
