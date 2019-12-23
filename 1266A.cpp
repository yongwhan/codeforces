#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	while(n--) {
		string s; cin>>s;
		int sum=0, zero=0, even=0;
		for (char ch : s) {
			sum+=ch-'0';
			if(ch=='0') zero++;
			if((ch-'0')%2==0) even++;
		}
		cout<<((sum%3==0&&zero&&even>1)?"red":"cyan")<<"\n";
	}
	return 0;
}
