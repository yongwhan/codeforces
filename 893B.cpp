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
	int n, ret=0; cin>>n;
	for (int k=0; k<10; k++) {
		int d=0;
		for (int i=0; i<k+1; i++) d=d*2+1;
		for (int i=0; i<k; i++) d<<=1;
		if(n%d==0) ret=d;
	}
	cout << ret << endl;
	return 0;
}
