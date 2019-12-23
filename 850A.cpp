#include<bits/stdc++.h>
using namespace std;

const double pi=acos(-1);

double dot(vector<int> &a, vector<int> &b) {
	int k=a.size();
	double ret=0;
	for (int i=0; i<k; i++)
		ret+=a[i]*b[i];
	return ret;
}

double norm(vector<int> &a) {
	return sqrt(dot(a,a));
}

double r2d(double x) {
	return x*180/pi;
}

vector<int> diff(vector<int> &a, vector<int> &b) {
	int k=a.size();
	vector<int> ret(k,0);
	for (int i=0; i<k; i++) ret[i]=a[i]-b[i];
	return ret;
}

bool good(int i, vector<vector<int>> &a, int n) {
	for (int j=0; j<n; j++)
		for (int k=0; k<n; k++)
			if(i!=j&&i!=k&&j!=k) {
				vector<int> x=diff(a[j],a[i]), y=diff(a[k],a[i]);
				if(r2d(acos(dot(x,y)/(norm(x)*norm(y))))<90) return false;
			}
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	if(n>20) {
		cout << 0 << endl;
		return 0;
	}
	vector<vector<int>> a(n, vector<int>(5,0));
	for (int i=0; i<n; i++)
		for (int j=0; j<5; j++)
			cin>>a[i][j];
	vector<int> ret;
	for (int i=0; i<n; i++) if(good(i,a,n)) ret.push_back(i+1);
	cout << ret.size() << endl;
	for (auto x : ret)
		cout << x << endl;
	return 0;
}
