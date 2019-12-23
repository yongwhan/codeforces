#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		string a; cin>>a;
		queue<int> odd, even;
		for (const char &ch : a)
			if((ch-'0')%2) odd.push(ch);
			else even.push(ch);
		string ret;
		while(!odd.empty() && !even.empty()) {
			char x=odd.front(), y=even.front();
			if(x<y) ret+=x, odd.pop();
			else ret+=y, even.pop();
		}
		while(!odd.empty())
			ret+=odd.front(), odd.pop();
		while(!even.empty())
			ret+=even.front(), even.pop();
		cout<<ret<<endl;
	}
	return 0;
}
