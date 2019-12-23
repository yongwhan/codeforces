#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,h,a,b,k; cin>>n>>h>>a>>b>>k;
	while(k--) {
		int ta, fa, tb, fb, ret=0; cin>>ta>>fa>>tb>>fb;
		if(ta==tb) ret=abs(fa-fb);
		else {
			if(fa>b) ret+=fa-b, fa=b;
			else if(fa<a) ret+=a-fa, fa=a;
			ret+=abs(ta-tb)+abs(fa-fb);
		}
		cout << ret << endl;
	}
	return 0;
}
