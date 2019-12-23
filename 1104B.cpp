#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int ret=0;
	stack<char> stk;
	for (auto ch : s) {
		if(stk.empty()) stk.push(ch);
		else {
			if(stk.top()==ch) stk.pop(), ret=1-ret;
			else stk.push(ch);
		}
	}
	cout << (!ret ? "No" : "Yes") << endl;
	return 0;
}
