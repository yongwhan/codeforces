#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,b; cin>>n;
	map<int,int> deg;
	for (int i=0; i<n-1; i++)
		cin>>a>>b,
		deg[a]++, deg[b]++;
	int ret=0;
	for (auto it : deg) {
		int cur=it.second;
		ret+=cur*(cur-1)/2;
	}
	cout << ret << endl;
	return 0;
}
