#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int inc[]={5,2,1};

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t-->0) {
		int a,b; cin>>a>>b;
		int x=abs(a-b), ret=0;
		for (int i=0; i<3; i++)
			ret+=x/inc[i], x%=inc[i];
		cout<<ret<<"\n";
	}
	return 0;
}
