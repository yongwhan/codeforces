#include<bits/stdc++.h>
using namespace std;

int eval(int x) {
	int ret=0;
	while(x) ret+=x%10, x/=10;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int k,ret=0; cin>>k;
	for (int i=0; i<10800100+77; i++) {
		if(eval(i)==10) {
			ret++;
			if(ret==k) {
				cout << i << endl;
				return 0;
			}
		}
	}
}
