#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,cur=1,ret=0,x; cin>>n; n*=2;
	stack<int> stk;
	for (int i=0; i<n; i++) {
		string instr; cin>>instr;
		if(instr=="add") cin>>x, stk.push(x);
		else {
			if(!stk.empty()) {
				if(stk.top()==cur) stk.pop();
				else {
					ret++;
					while(!stk.empty()) stk.pop();
				}
			}
			cur++;
		}
	}
	cout << ret << endl;
	return 0;
}
