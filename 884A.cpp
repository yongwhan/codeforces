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

int main() {
	int n,t; cin>>n>>t;
	vector<int> a(n);
	for (int i=0; i<n; i++) {
		int x; cin>>x;
		a[i]=86400-x;
	}
	int ret=-1;
	for (int i=0; i<n; i++) {
		t-=a[i];
		if(t<=0) {
			cout << i+1 << endl;
			return 0;
		}
	}
	return 0;
}
