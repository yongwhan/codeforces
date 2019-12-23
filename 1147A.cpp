#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
const int mx=1e5+777;

bool a[mx];

int main(){
	set<ii> st;
	int n,k; cin>>n>>k;
	for(int i=0; i<k; i++) {
		int x; cin>>x;
		st.insert({x,x});
		a[x]=true;
		if(a[x-1])
			st.insert({x,x-1});
		if(a[x+1])
			st.insert({x,x+1});
	}
	cout<<n*3-2-st.size()<<"\n";
	return 0;
}
