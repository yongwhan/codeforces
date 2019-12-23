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
	int ret=0;
	for (int i=0; i<n; i++) {
		int s,d; cin>>s>>d;
		int x=max(0, (ret-s)/d);
		while(1) {
			int cur=x*d+s;
			if(ret<cur) {
				ret=cur;
				break;
			}
			x++;
		}
	}
	cout << ret << endl;
	return 0;
}
