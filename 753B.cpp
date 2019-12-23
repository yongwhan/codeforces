#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int b,c;
	while(1) {
		string ret;
		for (char ch='0'; ch<='9'; ch++) {
			string s;
			for (int i=0; i<4; i++)
				s+=ch;
			cout << s << endl;
			cin>>b>>c;
			for (int i=0; i<b; i++) ret+=ch;
		}

		sort(ret.begin(), ret.end());
		do {
			cout << ret << endl;
			cin>>b>>c;
			if(b==4) break;
		} while(next_permutation(ret.begin(), ret.end()));
		if(b==4) break;
	}
	return 0;
}
