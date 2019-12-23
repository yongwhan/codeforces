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
	vector<bool> flag(4,false);
	flag[1]=flag[2]=true;
	int n; cin>>n;
	for (int i=0; i<n; i++) {
		int a; cin>>a;
		if(!flag[a]) {
			cout << "NO" << endl;
			return 0;
		} else {
			for (int j=1; j<=3; j++)
				if(j!=a) flag[j]=!flag[j];
		}
	}
	cout << "YES" << endl;
	return 0;
}
