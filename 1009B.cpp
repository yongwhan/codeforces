#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef pair<char,int> ci;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	vector<int> zeros;
	vector<ci> ret;
	int one=0, two=0, before=0;
	for (char ch : s) {
		if(ch=='0') before++;
		else if(ch=='1') one++;
		else
			zeros.push_back(before), before=0, two++;
	}
	if(before) zeros.push_back(before), before=0;
	if(!zeros.empty()) ret.push_back({'0',zeros[0]});
	ret.push_back({'1',one});
	if(two) ret.push_back({'2',1}), two--;
	for (int i=1; i<zeros.size(); i++) {
		ret.push_back({'0',zeros[i]});
		if(two) ret.push_back({'2',1}), two--;
	}

	for (auto it : ret)
		for (int i=0; i<it.second; i++) cout << it.first;
	cout << endl;
	return 0;
}
