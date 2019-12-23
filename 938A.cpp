#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool vwl(char x) {
	string lst="aeiouy";
	for (char ch : lst)
		if(ch==x)
			return true;
	return false;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	queue<int> q; q.push(s[0]);
	for (int i=1; i<n; i++) {
		if(vwl(q.back())&&vwl(s[i]))
			continue;
		q.push(s[i]);
	}
	string ret;
	while(!q.empty())
		ret+=q.front(), q.pop();
	cout<<ret<<"\n";
	return 0;
}
