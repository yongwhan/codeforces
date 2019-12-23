#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string t; cin>>t;
	int n=t.size();
	if(n%2) reverse(t.begin(), t.end());
	string s;
	while(!t.empty())
		s+=t.back(), t.pop_back(), reverse(t.begin(), t.end());
	reverse(s.begin(), s.end());
	cout << s << endl;
	return 0;
}
