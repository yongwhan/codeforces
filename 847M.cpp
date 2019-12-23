#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	set<int> d;
	vector<int> t(n);
	for (int i=0; i<n; i++)
		cin>>t[i];
	int cur=0;
	for (int i=0; i<n-1; i++)
		cur=t[i+1]-t[i], d.insert(cur);
	int ret=t[n-1];
	if(d.size()==1) ret+=cur;
	cout << ret << endl;	
	return 0;
}
