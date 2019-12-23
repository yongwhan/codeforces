#include<bits/stdc++.h>
using namespace std;

const int mx=35;
vector<vector<bool>> grid(mx, vector<bool>(mx,false));

string pairup(char a, char b) {
	if(a>b) swap(a,b);
	string ret; ret+=a; ret+=" "; ret+=b;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s,t; cin>>s>>t;
	for (int i=0; i<n; i++) {
		if(s[i]!=t[i]) {
			int x=s[i]-'a', y=t[i]-'a';
			grid[x][y]=grid[y][x]=true;
		}
	}
	set<char> vis;
	set<string> ret;
	for (char ch='a'; ch<='z'; ch++) {
		if(vis.find(ch)==vis.end()) {
			queue<char> q; q.push(ch);
			while(!q.empty()) {
				char cur=q.front(); q.pop();
				for (char nxt='a'; nxt<='z'; nxt++) {
					if(grid[cur-'a'][nxt-'a'] && vis.find(nxt)==vis.end()) {
						vis.insert(nxt);
						q.push(nxt);
						ret.insert(pairup(cur,nxt));
					}
				}
			}
		}
	}
	cout << ret.size() << endl;
	for (auto it : ret)
		cout << it << endl;
	return 0;
}
