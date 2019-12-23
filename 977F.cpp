#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n;
	map<int,set<int>> mp;
	for (int i=0; i<n; i++)
		cin>>x,
		mp[x].insert(i+1);

	vector<int> ret;
	while(!mp.empty()) {
		auto it=mp.begin();
		int cur=(*it).first;
		auto it2=(it->second).begin();
		int idx=*it2;
		mp[cur].erase(idx);
		if(mp[cur].empty())
			mp.erase(cur);
		vector<int> tmp;
		tmp.push_back(idx);
		while(1) {
			int nxt=cur+1;
			if(mp.find(nxt)==mp.end())
				break;
			it2=mp[nxt].lower_bound(idx);
			if(it2==mp[nxt].end())
				break;
			idx=*it2;
			tmp.push_back(idx);
			mp[nxt].erase(idx);
			if(mp[nxt].empty())
				mp.erase(nxt);
			cur=nxt;
		}
		if(ret.size()<tmp.size())
			ret=tmp;
	}
	cout << ret.size() << endl;
	for (auto it : ret)
		cout << it << " ";
	cout << endl;
	return 0;
}
