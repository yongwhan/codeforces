#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; string s; cin>>n>>s; s+='W';
	int ret=0;
	vector<int> ans;
	for (char ch : s) {
		if(ch=='B') ret++;
		else {
			if(ret) ans.push_back(ret);
			ret=0;
		}
	}
	cout << ans.size() << endl;
	for (int x : ans)
		cout << x << " ";
	cout << endl;
	return 0;
}
