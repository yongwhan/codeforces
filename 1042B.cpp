#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int INF=INT_MAX/3;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<string,int> ct;
	ct["ABC"]=ct["AB"]=ct["AC"]=ct["BC"]=ct["A"]=ct["B"]=ct["C"]=INF;
	for (int i=0; i<n; i++) {
		int c; string s; cin>>c>>s;
		sort(s.begin(),s.end());
		ct[s]=min(ct[s],c);
	}
	int ret=min({ct["ABC"],
	             ct["AB"]+min({ct["C"],ct["AC"],ct["BC"]}),
	             ct["AC"]+min({ct["B"],ct["AB"],ct["BC"]}),
	             ct["BC"]+min({ct["A"],ct["AB"],ct["AC"]}),
	             ct["A"]+ct["B"]+ct["C"],
	});
	cout<<(ret<INF ? ret : -1)<<"\n";
	return 0;
}
