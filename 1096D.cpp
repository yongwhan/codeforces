#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

vector<ll> dp(4,0);

string hard="hard";

int eval(char ch) {
	for (int i=0; i<4; i++)
		if(ch==hard[i])
			return i;
	return -1;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	vector<ll> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	for (int i=0; i<n; i++) {
		int pos=eval(s[i]);
		if(pos!=-1)
			dp[pos+1]=min(dp[pos+1],dp[pos]), dp[pos]+=a[i];
	}
	cout << *min_element(dp.begin(), dp.end()) << endl;
	return 0;
}
