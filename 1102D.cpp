#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	string s; cin>>s;
	map<char,int> a, t;
	for (auto it : s)
		a[it]++;
	for (char ch='0'; ch<='2'; ch++)
		a[ch]-=n/3;
	string ret;
	for (auto x : s) {
		if (a[x]<=0){
				ret+=x;
				t[x]++;
				continue;
		}
		for (char ch='0'; ch<='2'; ch++) {
			if(a[ch]<0) {
				if(ch>x && t[x]<n/3) {
					ret+=x;
					t[x]++;
					break;
				}
				ret+=ch;
				a[ch]++;
				a[x]--;
				break;
			}
		}
	}
	cout << ret << endl;
	return 0;
}
