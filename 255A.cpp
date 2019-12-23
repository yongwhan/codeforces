#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n;
	map<int,int> ct;
	int mx=0;
	for (int i=0; i<n; i++)
		cin>>x, ct[i%3]+=x, mx=max(mx,ct[i%3]);
	vector<string> names = {"chest", "biceps", "back"};
	for (auto it : ct)
		if(it.second==mx)
			cout << names[it.first] << endl;
	return 0;
}
