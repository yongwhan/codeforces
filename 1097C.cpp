#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int fw(string &s, char ch) {
	int ret=0;
	for (auto it : s) {
		if(it==ch) ret++;
		else {
			if(ret==0)
				return -1;
			ret--;
		}
	}
	return ret;
}

int bw(string s) {
	reverse(s.begin(),s.end());
	return fw(s,')');
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<int,int> forward, backward;
	int zero=0;
	string s;
	for (int i=0; i<n; i++) {
		cin>>s;
		int x=fw(s,'('), y=bw(s);
		if(x==0) zero++;
		if(x>0)
			forward[x]++;
		if(y>0)
			backward[y]++;
	}
	int ret=zero/2;
	for (auto it : forward)
		ret+=min(it.second,backward[it.first]);
	cout << ret << endl;
	return 0;
}
