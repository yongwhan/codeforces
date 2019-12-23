#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<char,int> ci;
typedef pair<int,char> ic;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; string s; cin>>n>>k>>s;
	vector<ci> v(n);
	for (int i=0; i<n; i++) v[i]={s[i],i};
	sort(v.begin(),v.end());
	vector<ic> w(n-k);
	for (int i=0; i<n-k; i++) w[i]={v[k+i].second,v[k+i].first};
	sort(w.begin(),w.end());
	for (int i=0; i<n-k; i++)
		cout << w[i].second;
	cout << endl;
	return 0;
}
