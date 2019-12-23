#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string eval(string s) {
	sort(s.begin(), s.end());
	return s;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string a,b; cin>>a>>b;
	if(eval(a)!=eval(b)) { cout << -1 << endl; return 0; }
	vector<int> ret;
	while(1) {
		bool up=false;
		for (int i=0; i<n; i++) {
			if(a[i]!=b[i]) {
				for (int j=i+1; j<n; j++) {
					if(b[i]==a[j]) {
						ret.push_back(j);
						swap(a[j-1],a[j]);
						up=true;
						break;
					}
				}
			}
			if(up) break;
		}
		if(!up) break;
	}
	cout << ret.size() << endl;
	for (auto it : ret)
		cout << it << " ";
	cout << endl;
	return 0;
}
