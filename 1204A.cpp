#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int cur=s.size()/2;
	if(s.size()%2&&s.substr(1)!=string(s.size()-1,'0'))
		cur++;
	cout<<cur<<endl;
	return 0;
}
