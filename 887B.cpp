#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

bool ok(string &s) {
	return s[0]!='0';
}

int str2num(string &s) {
	stringstream ss(s);
	int ret; ss>>ret;
	return ret;
}

int main() {
	int n; cin>>n;
	char a[n][6];
	for (int i=0; i<n; i++)
		for (int j=0; j<6; j++) cin>>a[i][j];

	set<int> cand;
	for (int bt=1; bt<(1<<n); bt++) {
		// idx: dice indices included in creating a number.
		vector<int> idx;
		for (int i=0; i<n; i++) if((1<<i)&bt) idx.push_back(i);

		int sz=idx.size();
		// p: permutation of indices
		vector<int> p(sz);
		for (int i=0; i<sz; i++) p[i]=i;
		do {
			queue<string> q; q.push("");
			for (int i=0; i<sz; i++) {
				int l=q.size();
				while(l--) {
					string cur=q.front(); q.pop();
					for (int j=0; j<6; j++)
						q.push(cur+a[idx[p[i]]][j]);
				}
			}

			while(!q.empty()) {
				string s=q.front();
				if(ok(s)) cand.insert(str2num(s));
				q.pop();
			}
		} while(next_permutation(p.begin(),p.end()));
	}

	int ret=1;
	while(1) {
		if(cand.find(ret)==cand.end()) { cout << ret-1 << endl; return 0; }
		ret++;
	}
	return 0;
}
