#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	map<string,int> pt;
	string s;
	int x;
	for (int i=0; i<n; i++)
		cin>>s>>x,
		pt[s]=max(pt[s],x);
	vector<int> u;
	for (auto c : pt)
		u.push_back(c.second);
	int m=u.size();
	sort(u.begin(), u.end());
	cout << n << endl;
	for (auto c : pt) {
		cout << c.first << " ";
		x=u.end()-upper_bound(u.begin(), u.end(), c.second);
		if (2*x>m) cout << "noob" << endl;
		else if (5*x>m) cout << "random" << endl;
		else if (10*x>m) cout << "average" << endl;
		else if(100*x>m) cout << "hardcore" << endl;
		else cout << "pro" << endl;
	}
	return 0;
}
