#include<bits/stdc++.h>
using namespace std;

bool cmp(string &s, string &t) {
	return s.size()<t.size();
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	unordered_map<string,int> mp;
	unordered_set<string> st;
	vector<string> v(n);
	string t;
	for (int k=0; k<n; k++) {
		cin>>v[k];
		st.clear();
		for (int i=0; i<9; i++) {
			t.clear();
			for (int j=i; j<9; j++) t+=v[k][j], st.insert(t);
		}
		for (auto it : st) mp[it]++;
	}
	for (int k=0; k<n; k++) {
		string cur=v[k];
		vector<string> cand;
		for (int i=0; i<9; i++) {
			t.clear();
			for (int j=i; j<9; j++)
				t+=cur[j], cand.push_back(t);
		}
		sort(cand.begin(),cand.end(),cmp);
		for (auto ret : cand) if(mp[ret]==1) {
			cout << ret << endl;
			break;
		}
	}
	return 0;
}
