#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n), b(n+1,false);
	map<int,int> ct;
	for (int i=0; i<n; i++)
		cin>>a[i], ct[a[i]]++;
	int cur=1, ret=0;
	for (int i=0; i<n; i++) {
		while(ct[cur])
			cur++;
		if(ct[a[i]]>1&&(b[a[i]]||cur<a[i]))
			ret++, ct[a[i]]--, a[i]=cur, ct[cur]++;
		else b[a[i]]=true;
	}
	cout << ret << endl;
	for (auto x : a)
		cout << x << " ";
	cout << endl;
	return 0;
}
