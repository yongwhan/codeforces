#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int b,p,f,h,c,ret=-1; cin>>b>>p>>f>>h>>c;
		for (int i=0; i<=50; i++)
			for (int j=0; j<=50; j++)
				if(i<=p&&j<=f&&(i+j)*2<=b)
					ret=max(ret,i*h+j*c);
		cout<<ret<<endl;
	}
	return 0;
}
