#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int ceil_div(int a, int b) {
	return (a+b-1)/b;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s; int n; cin>>n;
	set<char> st(s.begin(), s.end());
	if(n<st.size()) {
		cout << -1 << endl;
		return 0;
	}
	map<char,int> weight, ct;
	int used=0;
	for (auto ch : st)
		weight[ch]=1, used++;
	for (auto ch : s)
		ct[ch]++;

	while(used<n) {
		char up=*st.begin();
		for (auto ch : st)
			if(ct[ch]*weight[up]>ct[up]*weight[ch])
				up=ch;
		weight[up]++; used++;
	}
	int val=0;
	string ret;
	for (auto it : weight)
		for (int i=0; i<it.second; i++) {
			ret+=it.first;
			val=max(val,ceil_div(ct[it.first],it.second));
		}
	cout << val << endl << ret << endl;
	return 0;
}
