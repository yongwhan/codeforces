#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,b,c=0, t, ret=0; cin>>n>>a>>b;
	for (int i=0; i<n; i++) {
		cin>>t;
		if(t==2) {
			if(b) b--;
			else ret+=2;
		} else {
			if(a) a--;
			else {
				if(b) b--, c++;
				else if(c) c--;
				else ret++;
			}
		}
	}
	cout << ret << endl;
	return 0;
}
