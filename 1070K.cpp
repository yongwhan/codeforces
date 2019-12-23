#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,k; cin>>n>>k;
	vector<int> s(n);
	int sum=0;
	for (int i=0; i<n; i++) cin>>s[i], sum+=s[i];
	if(sum%k) { cout << "No" << endl; return 0; }
	sum/=k;
	vector<int> ret;
	int cur=0, ct=0;
	for (int i=0; i<n; i++) {
		cur+=s[i]; ct++;
		if(cur>sum) { cout << "No" << endl; return 0; }
		else if(cur==sum) ret.push_back(ct), cur=0, ct=0;
	}
	cout << "Yes" << endl;
	for (auto it : ret)
		cout << it << " ";
	cout << endl;
	return 0;
}
