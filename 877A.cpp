#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	string list[5]={"Danil", "Olya", "Slava", "Ann", "Nikita"};
	string s; cin>>s;
	int count=0, n=s.size();
	for (int i=0; i<5; i++) {
		string cur=list[i];
		int l=cur.size();
		for (int j=0; j<n; j++)
			if(cur==s.substr(j,l)) count++;
	}
	if(count==1) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
