#include<bits/stdc++.h>
using namespace std;

vector<int> eval(priority_queue<int> pq, int n) {
	vector<int> ret;
	while(n--&&!pq.empty())
		ret.push_back(pq.top()), pq.pop();
	return ret;
}

bool sorted(vector<int> &p) {
	vector<int> q=p;
	sort(q.begin(),q.end());
	return p==q;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	priority_queue<int> pq;
	int n,x; cin>>n;
	map<int,int> ct;
	int mx=0, first=-1;
	for (int i=0; i<n; i++)
		ct[i+1]=0;
	vector<int> p(n);
	for (int i=0; i<n; i++)
		cin>>p[i];
	if(sorted(p)) {
		cout << 1 << endl;
		return 0;
	}
	first=p[0];
	for (auto x : p) {
		vector<int> v=eval(pq,2);
		pq.push(x);
		if(v.empty()) continue;
		if(v[0]>x) {
			int sz=int(v.size())-1;
			if(!sz||(sz&&v[1]<x))
				ct[v[0]]++;
			mx=max(mx,ct[v[0]]);
		}
	}
	int ret=1;
	if(first==1&&n!=1) ret=2;
	for (auto it : ct) {
		if((mx==1&&it.first!=first)||(mx>1&&it.second==mx)) {
			ret=it.first;
			break;
		}
	}
	cout << ret << endl;
	return 0;
}
