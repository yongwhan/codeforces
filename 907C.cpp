#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	set<char> remain;
	for (char ch='a'; ch<='z'; ch++)
		remain.insert(ch);
	int ret=0;
	for (int i=0; i<n; i++) {
		char ch; string s;
		cin>>ch>>s;
		set<char> cur(s.begin(),s.end());
		bool excess=false;
		if(ch=='!') {
			if(remain.size()==1) excess=true;
			for (char ch='a'; ch<='z'; ch++)
				if(cur.find(ch)==cur.end())
					remain.erase(ch);
		}
		else if(ch=='.') {
			for (char ch='a'; ch<='z'; ch++)
				if(cur.find(ch)!=cur.end())
					remain.erase(ch);
		}
		else if(ch=='?') {
			char tmp=s[0];
			if(remain.size()==1 && remain.find(tmp)==remain.end())
				excess=true;
			remain.erase(tmp);
		}
		if(excess)
			ret++;
	}
	cout << ret << endl;
	return 0;
}
