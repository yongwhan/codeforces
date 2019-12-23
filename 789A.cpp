#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int n,k,w,ret=0; cin>>n>>k;
	for (int i=0; i<n; i++) {
		cin>>w;
		ret+=(w+k-1)/k;
	}
	cout << (ret+1)/2 << endl;
	return 0;
}
