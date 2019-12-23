#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; double k; cin>>n>>m>>k;
	map<string,int> before, after;
	for (int i=0; i<n; i++) {
		string key; int value; cin>>key>>value;
		before[key]=value;
	}

	int t=0;
	for (int i=1; i<100; i++)
		if(fabs(i/100.-k)<1e-3) t=i;

	for (auto it : before) {
		int value=it.second*t/100;
		if(value<100)
			continue;
		after[it.first]=value;
	}

	for (int i=0; i<m; i++) {
		string key; cin>>key;
		after[key]=max(after[key],0);
	}
	cout << after.size() << endl;
	for (auto it : after)
		cout << it.first << " " << it.second << endl;
	return 0;
}
