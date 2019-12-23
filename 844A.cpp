#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;

int main() {
	string s; int k; cin>>s>>k;
	int n=s.size();
	if(k>n) { cout << "impossible" << endl; return 0; }
	set<char> st(s.begin(),s.end());
	cout << max(0,int(k-st.size())) << endl;
	return 0;
}
