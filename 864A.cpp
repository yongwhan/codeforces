#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int n; cin>>n;
	vector<int> v(n);
	for (int i=0; i<n; i++) cin>>v[i];
	set<int> st(v.begin(), v.end());
	if(st.size()!=2) {
		cout << "NO" << endl;
		return 0;
	}

	map<int,int> mp;
	for (int i=0; i<n; i++)
		mp[v[i]]++;

	int ret=0;
	map<int,int> mp2;
	for (map<int,int>::iterator it=mp.begin(); it!=mp.end(); it++) {
		int cur=(*it).second;
		mp2[cur]++;
		ret=max(ret,mp2[cur]);
	}

	if(ret!=2) {
		cout << "NO" << endl;
		return 0;
	}

	cout << "YES" << endl;
	bool first=true;
	for (set<int>::iterator it=st.begin(); it!=st.end(); it++) {
		if(!first) cout << " ";
		cout << (*it);
		first=false;
	}
	cout << endl;
	return 0;
}
