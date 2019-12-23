#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool solved(vector<int> &v) {
	int iter=0;
	for (int i=0; i<6; i++) {
		set<int> st;
		for (int j=0; j<4; j++)
			st.insert(v[iter++]);
		if(st.size()!=1) return false;
	}
	return true;
}

vector<int> rotate(vector<int> v, vector<int> p, int t) {
	for (int i=0; i<8; i++)
		p[i]--;
	map<int,int> mp;
	for (int i=0; i<24; i++)
		mp[i]=i;
	for (int i=0; i<8; i++)
		mp[p[i]]=p[(i+2)%8];
	for (int i=0; i<t; i++) {
		vector<int> w(24);
		for (int j=0; j<24; j++)
			w[j]=v[mp[j]];
		v=w;
	}
	return v;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<vector<int>> v={{1,3,5,7,9,11,22,24}, {15,16,7,8,19,20,23,24}, {2,4,6,8,10,12,21,23}, {13,14,5,6,17,18,21,22}, {1,2,18,20,12,11,15,13}, {3,4,17,19,10,9,16,14}};
	vector<int> cur(24);
	for (int i=0; i<24; i++)
		cin>>cur[i];
	for (auto p : v) {
		vector<int> w=rotate(cur,p,1), u=rotate(cur,p,3);
		if(solved(w)||solved(u)) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
