#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int k; cin>>k;
	int ques=0, star=0, idx=-1, n=s.size();
	for (int i=0; i<n; i++) {
		char ch=s[i];
		if(ch=='?') ques++;
		else if(ch=='*') star++, idx=i;
	}
	int len=n-ques-star, mn=len-ques-star;
	if(k<mn) {
		cout << "Impossible" << endl;
		return 0;
	}
	if(star) {
		string ret;
		for (int i=0; i<n; i++) {
			char ch=s[i];
			if(ch=='?') ret.pop_back();
			else if(ch=='*') ret.pop_back();
			else ret+=ch;
			if(i==idx) {
				ret+=string(k-mn, s[i-1]);
			}
		}
		cout << ret << endl;
		return 0;
	}
	if(k>len) {
		cout << "Impossible" << endl;
		return 0;
	}
	int rem=len-k;
	string ret;
	for (int i=0; i<n; i++) {
		char ch=s[i];
		if(ch=='?') {
			if(rem>0) {
				rem--;
				ret.pop_back();
			}
		} else
			ret+=ch;
	}
	cout << ret << endl;
	return 0;
}
