#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<char,int> ct;
	set<char> cant;
	for (int i=0; i<n; i++) {
		string s; cin>>s;
		cant.insert(s[0]);
		reverse(s.begin(), s.end());
		int mul=1;
		for (char ch : s)
			ct[ch]+=mul, mul*=10;
	}

	priority_queue<pair<int,char>> pq;
	for (auto it : ct)
		pq.push({it.second, it.first});
	set<int> can;
	for (int i=0; i<10; i++)
		can.insert(i);
	int ret=0;
	while(!pq.empty()) {
		auto it=pq.top(); pq.pop();
		auto cur=*can.begin();
		if(cant.find(it.second)!=cant.end() && cur==0) {
			auto it2=can.begin();
			it2++;
			int val=*it2;
			can.erase(val),
			ret+=val*it.first;
			continue;
		}
		can.erase(cur);
		ret+=cur*it.first;
	}
	cout << ret << endl;
	return 0;
}
