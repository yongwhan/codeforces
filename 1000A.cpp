#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	map<string,int> ct;
	int n; cin>>n; string s;
	for (int i=0; i<n; i++) cin>>s, ct[s]++;
	for (int i=0; i<n; i++) cin>>s, ct[s]=max(0,ct[s]-1);
	int ret=0;
	for (auto it : ct) ret+=it.second;
	cout << ret << endl;
	return 0;
}
