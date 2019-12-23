#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x;
	set<int> st;
	for (int i=0; i<4; i++)
		cin>>x, st.insert(x);
	cout << 4-st.size() << endl;
	return 0;
}
