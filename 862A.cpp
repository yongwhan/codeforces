#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int n,x; cin>>n>>x;
	set<int> st;
	for (int i=0; i<n; i++) {
		int cur;
		cin>>cur;
		st.insert(cur);
	}

	int ret=0;
	for (int i=0; i<x; i++)
		if(st.find(i)==st.end()) st.insert(i), ret++;
	if(st.find(x)!=st.end()) st.erase(x), ret++;
	cout << ret << endl;
	return 0;
}
