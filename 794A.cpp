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
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c,n,x,ret=0; cin>>a>>b>>c;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>x;
		if(b<x&&x<c) ret++;
	}
	cout << ret << endl;
	return 0;
}
