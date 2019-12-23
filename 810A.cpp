#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int n,k,sum=0,a; cin>>n>>k;
	for (int i=0; i<n; i++) cin>>a, sum+=a;
	int ret=0;
	while(1) {
		double cur=double(sum+k*ret)/(n+ret);
		if(int(cur+.5)==k) { cout << ret << endl; return 0; }
		ret++;
	}
	return 0;
}
