#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int q; cin>>q;
	while(q--) {
		int n; cin>>n;
		string s;
		int one=0, zero=0, odd=0, even=0;
		for (int i=0; i<n; i++) {
			cin>>s;
			for (const char &ch : s)
				if(ch=='1') one++;
				else zero++;
			(s.size()%2) ? odd++ : even++;
		}
		if(odd&&(one%2)) one--, odd--;
		if(odd&&(zero%2)) zero--, odd--;
		while(odd>=2) {
			odd-=2;
			if(one>=2) one-=2;
			else zero-=2;
		}

		if(odd==1 || (odd==0 && ((one%2)||(zero%2)))) n--;
		cout<<n<<endl;
	}
	return 0;
}
