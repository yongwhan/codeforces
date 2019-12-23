#include<bits/stdc++.h>
using namespace std;

const int mx=5077;
vector<vector<bool>> l(mx, vector<bool>(mx,false)), r(mx, vector<bool>(mx,false));

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size(), ret=0;
	for (int i=0; i<n; i++) {
		int cur=0, ques=0;
		for (int j=i; j<n; j++) {
			char ch=s[j];
			if(ch=='(') cur++;
			else if(ch==')') cur--;
			else ques++;
			if(cur<0 && (ques<-cur || (ques==-cur &&ch=='?'))) break;
			if((j-i+1)%2==0) l[i][j]=true;
		}
	}
	for (int j=n-1; j>=0; j--) {
		int cur=0, ques=0;
		for (int i=j; i>=0; i--) {
			char ch=s[i];
			if(ch=='(') cur--;
			else if(ch==')') cur++;
			else ques++;
			if(cur<0 && (ques<-cur || (ques==-cur &&ch=='?'))) break;
			if((j-i+1)%2==0) r[i][j]=true;
		}
	}
	for (int i=0; i<n; i++) for (int j=i; j<n; j++) if(l[i][j]&&r[i][j]) ret++;
	cout << ret << endl;
	return 0;
}
