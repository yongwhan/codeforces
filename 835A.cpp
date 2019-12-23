#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int s,v1,v2,t1,t2; cin>>s>>v1>>v2>>t1>>t2;
	int x=2*t1+v1*s, y=2*t2+v2*s;
	if(x==y) {
		cout << "Friendship" << endl;
		return 0;
	}
	cout << (x<y ? "First" : "Second") << endl;
	return 0;
}
