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
	int n,k; cin>>n>>k;
	if(k==1) {
		cout << n << endl;
		return 0;
	}

	vector<int> d;
	for (int i=2; i*i<=n; i++) {
		if(n%i==0) {
			while(n%i==0) {
				d.push_back(i);
				n/=i;
				k--;
				if(k==1) break;
			}
		}
		if(k==1) break;
	}

	if(k==1) {
		d.push_back(n);
		k--;
	}

	if(k || (k==0 && d.back()==1)) {
		cout << -1 << endl;
		return 0;
	}

	for (int i=0; i<d.size(); i++) {
		if(i) cout << " ";
		cout << d[i];
	}
	cout << endl;
	return 0;
}
