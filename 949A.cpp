#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size();
	vector<vector<int>> ret(200777);
	priority_queue<int> zero, one;
	int ct=0;
	for (int i=0; i<n; i++) {
		if(s[i]=='1') {
			if(zero.empty()) {
				cout << -1 << endl;
				return 0;
			}
			int cur=zero.top();
			one.push(cur);
			zero.pop();
			ret[cur].push_back(i+1);
		}
		else {
			if(!one.empty()) {
				int cur=one.top();
				zero.push(cur);
				one.pop();
				ret[cur].push_back(i+1);
			} else {
				ret[ct].push_back(i+1);
				zero.push(ct++);
			}
		}
	}

	if(!one.empty()) {
		cout << -1 << endl;
		return 0;
	}
	ret.resize(ct);
	cout << ret.size() << endl;
	for (auto it : ret) {
		cout << it.size();
		for (auto it2 : it)
			cout << " " << it2;
		cout << endl;
	}
	return 0;
}
