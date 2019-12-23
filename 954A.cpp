#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; string s; cin>>n>>s;
	bool up=false;
	while(1) {
		up=false;
		for (int i=0; i<s.size()-1; i++) {
			string t=s.substr(i,2);
			if(t=="RU"||t=="UR") {
				s.erase(s.begin()+i);
				s[i]='D';
				up=true;
				break;
			}
		}
		if(!up) break;
	}
	cout << s.size() << endl;
	return 0;
}
