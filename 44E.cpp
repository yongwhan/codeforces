#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int k,a,b; string s; cin>>k>>a>>b>>s;
	int n=s.size();
	if(n<k*a||n>k*b) {
		cout << "No solution" << endl;
		return 0;
	}
	int q=n/k, r=n%k;
	vector<int> l(k,q);
	for (int i=0; i<r; i++)
		l[i]++;
	int cur=0;
	for (int i=0; i<k; i++)
		cout << s.substr(cur,l[i]) << endl, cur+=l[i];
	return 0;
}
