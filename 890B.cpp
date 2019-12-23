#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int n; cin>>n;
	set<int> st;
	vector<int> a(n);
	for (int i=0; i<n; i++) {
		cin>>a[i];
		st.insert(a[i]);
	}

	int rem=st.size();
	set<int> vis;
	for (int i=0; i<n; i++) {
		int cur=a[n-1-i];
		if(vis.find(cur)==vis.end()) {
			rem--;
			vis.insert(cur);
		}

		if(!rem) {
			cout << cur << endl;
			return 0;
		}
	}
	return 0;
}
