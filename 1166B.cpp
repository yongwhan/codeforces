#include<bits/stdc++.h>
using namespace std;

string lst="aeiou";

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int k; cin>>k;
	for (int d=5; d*d<=k; d++) {
		if(k%d==0) {
			int e=k/d;
			if(e<5) continue;
			for (int i=0; i<d; i++)
				for (int j=0; j<e; j++)
					cout<<lst[(i+j)%5];
			cout<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}
