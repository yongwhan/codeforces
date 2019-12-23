#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	for (int c=0; c<t; c++) {
		int x; cin>>x;
		if(x==0) {
			cout<<"1 1\n";
			continue;
		}
		set<int> ds;
		for (int i=1; i*i<=x; i++)
			if(x%i==0)
				ds.insert(i), ds.insert(x/i);
		bool done=false;
		for (const int &u : ds) {
			int v=x/u, a=(u+v)/2, b=(v-u)/2;
			if(a-b!=u||a+b!=v||b<=0) continue;
			int l=a/b, r=a-b*l;
			if(r>=l)
				continue;
			cout<<a<<" "<<l<<"\n";
			done=true;
			break;
		}
		if(!done)
			cout<<-1<<"\n";
	}
	return 0;
}
