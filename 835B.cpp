#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int k; string s; cin>>k>>s;
	int n=s.size();
	priority_queue<int> pq;
	int x=0;
	for (int i=0; i<n; i++) {
		char ch=s[i];
		int val=ch-'0';
		x+=val;
		if(ch!='9') {
			pq.push(-val);
		}
	}

	int ret=0;
	while(!pq.empty()) {
		if(x>=k) {
			cout << ret << endl;
			return 0;
		}
		ret++;
		x+=(9+pq.top());
		pq.pop();
	}
	cout << ret << endl;
	return 0;
}
