#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ll> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];

	for (int v=29; v>=0; v--) {
		int x=(1<<30)-1, t=0;
		for (int i=0; i<n; i++)
			if(a[i]&(1<<v))
				x&=a[i], t++;
		if(!(x%(1<<v))) {
			cout << t << endl;
			for(int i=0; i<n; i++)
				if(a[i]&(1<<v))
					cout << a[i] << " ";
			cout << endl;
			break;
		}
	}
	return 0;
}
