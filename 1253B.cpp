#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

vector<int> eval(const vector<int> &a, int n) {
	vector<int> ret;
	set<int> st, used;
	int ct=0;
	for (int i=0; i<n; i++) {
		int cur=a[i];
		if(cur>0) {
			if(used.count(cur))
				return {};
			st.insert(cur);
			used.insert(cur);
		} else {
			cur=-cur;
			if(!st.count(cur))
				return {};
			st.erase(cur);
		}
		ct++;
		if(st.empty()) {
			ret.push_back(ct);
			used.clear();
			ct=0;
		}
	}
	if(!st.empty())
		return {};
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	vector<int> ret=eval(a,n);	
	if(ret.empty()) {
		cout<<-1<<"\n";
		return 0;
	}
	cout<<ret.size()<<"\n";
	for (const auto &x : ret)
		cout<<x<<" ";
	cout<<"\n";
	return 0;
}
