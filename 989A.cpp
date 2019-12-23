#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size();
	for (int i=0; i<n-2; i++) {
		string t=s.substr(i,3);
		sort(t.begin(),t.end());
		if(t=="ABC") { cout << "Yes" << endl; return 0; }
	}
	cout << "No" << endl;
	return 0;
}
