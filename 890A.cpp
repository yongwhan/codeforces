#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	vector<int> a(6);
	int sum=0;
	for (int i=0; i<6; i++) {
		cin>>a[i];
		sum+=a[i];
	}

	for (int i=0; i<(1<<6); i++) {
		int cur=0;
		int x=0;
		for (int j=0; j<6; j++) {
			if(i&(1<<j)) {
				cur+=a[j];
				x++;
			}
		}
		if(cur*2==sum && x==3) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
