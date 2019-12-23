#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t,m; cin>>t>>m;
	vector<int> mem(m,0);
	int ct=0;
	for (int i=0; i<t; i++) {
		string cmd; cin>>cmd;
		if(cmd=="alloc") {
			int n; cin>>n;
			bool alloced=false;
			for (int i=0; i<=m-n; i++) {
				bool ok=true;
				for (int j=0; j<n; j++) {
					if(mem[i+j]) {
						ok=false;
						break;
					}
				}
				if(ok) {
					alloced=true;
					++ct;
					for (int j=0; j<n; j++)
						mem[i+j]=ct;
					cout << ct << endl;
					break;
				}
			}
			if(!alloced)
				cout << "NULL" << endl;
		} else if(cmd=="erase") {
			int x; cin>>x;
			if(x<=0) {
				cout << "ILLEGAL_ERASE_ARGUMENT" << endl;
				continue;
			}
			bool erased=false;
			for (int j=0; j<m; j++)
				if(mem[j]==x)
					mem[j]=0, erased=true;
			if(!erased)
				cout << "ILLEGAL_ERASE_ARGUMENT" << endl;
		} else {
			vector<int> mem2;
			for (auto it : mem)
				if(it)
					mem2.push_back(it);
			while(mem2.size()<m)
				mem2.push_back(0);
			mem=mem2;
		}
	}
	return 0;
}
