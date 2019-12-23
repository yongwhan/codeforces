#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	map<string,string> mp = {{"purple", "Power"}, {"green", "Time"}, {"blue", "Space"}, {"orange", "Soul"}, {"red", "Reality"}, {"yellow", "Mind"}};
	set<string> st = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
	int n; cin>>n;
	for (int i=0; i<n; i++) {
		string s; cin>>s;
		st.erase(mp[s]);
	}
	cout << st.size() << endl;
	for (string s : st)
		cout << s << endl;
	return 0;
}
