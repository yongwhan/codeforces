#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=57;

map<string, vector<int>> mp;
map<string, int> score;

bool cf(string &s, string &t) {
	if(score[s]!=score[t])
		return score[s]>score[t];
	for (int i=0; i<mx; i++)
		if(mp[s][i]!=mp[t][i])
			return mp[s][i]>mp[t][i];
}

bool cs(string &s, string &t) {
	if(mp[s][0]!=mp[t][0])
		return mp[s][0]>mp[t][0];
	if(score[s]!=score[t])
		return score[s]>score[t];
	for (int i=1; i<mx; i++)
		if(mp[s][i]!=mp[t][i])
			return mp[s][i]>mp[t][i];
}

string first(vector<string> &names) {
	string ret=names[0];
	for (auto it : names)
		if(cf(it,ret))
			ret=it;
	return ret;
}

string second(vector<string> &names) {
	string ret=names[0];
	for (auto it : names)
		if(cs(it,ret))
			ret=it;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	vector<int> point(mx,0);
	int lst[]={25, 18, 15, 12, 10, 8, 6, 4, 2, 1};
	for (int i=0; i<10; i++)
		point[i]=lst[i];
	set<string> cand;
	while(t--) {
		int n; cin>>n;
		for (int i=0; i<n; i++) {
			string s; cin>>s;
			if(mp.find(s)==mp.end())
				mp[s]=vector<int>(mx,0), score[s]=0;
			mp[s][i]++, score[s]+=point[i];
			cand.insert(s);
		}
	}
	vector<string> names(cand.begin(), cand.end());
	cout<<first(names)<<endl<<second(names)<<endl;
	return 0;
}
