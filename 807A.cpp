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
	int n; cin>>n;
	vector<int> a(n), b(n);
	bool diff=false, desc=true;
	for (int i=0; i<n; i++) {
		cin>>a[i]>>b[i];
		if(a[i]!=b[i]) diff=true;
		if(i&&a[i]>a[i-1]) desc=false;
	}

	if(diff) cout << "rated" << endl;
	else {
		if(desc) cout << "maybe" << endl;
		else cout << "unrated" << endl;
	}
	return 0;
}
