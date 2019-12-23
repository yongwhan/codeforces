#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n*n);
	for (int i=0; i<n*n; i++)
		cin>>a[i];
	sort(a.begin(), a.end());
	do {
		set<int> st;
		for (int i=0; i<n; i++) {
			int row=0, col=0;
			for (int j=0; j<n; j++) {
				row+=a[i*n+j];
				col+=a[j*n+i];
			}
			st.insert(row);
			st.insert(col);
		}
		int d1=0, d2=0;
		for (int i=0; i<n; i++)
			d1+=a[i*n+i], d2+=a[i*n+(n-1-i)];
		st.insert(d1);
		st.insert(d2);

		if(st.size()==1) {
			cout << *st.begin() << endl;
			for (int i=0; i<n; i++) {
				for (int j=0; j<n; j++)
					cout << a[i*n+j] << " ";
				cout << endl;
			}
			return 0;
		}
	} while(next_permutation(a.begin(), a.end()));
	return 0;
}
