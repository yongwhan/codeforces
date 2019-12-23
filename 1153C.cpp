#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; string s; cin>>n>>s;
	int m=n/2;
	int open=0, close=0, ques=0;
	for (char ch : s)
		if(ch=='(') open++;
		else if(ch==')') close++;
		else ques++;
	if(open>m||close>m) {
		cout << ":(" << endl;
		return 0;
	}

	for (int i=0; i<n; i++) {
		if(open==m)
			break;
		if(s[i]=='?')
			s[i]='(', open++;
	}

	for (int i=0; i<n; i++)
		if(s[i]=='?')
			s[i]=')', close++;

	if(open!=m||close!=m) {
		cout << ":(" << endl;
		return 0;
	}

	int ct=0;
	for (int i=0; i<n-1; i++) {
		if(ct==0&&i) {
			cout << ":(" << endl;
			return 0;
		}
		if(s[i]=='(') ct++;
		else {
			if(ct<=0) {
				cout << ":(" << endl;
				return 0;
			}
			ct--;
		}
	}

	cout << ((ct==1&&s[n-1]==')') ? s : ":(") << endl;
	return 0;
}
