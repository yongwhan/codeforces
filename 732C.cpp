#include<bits/stdc++.h>
using namespace std;
int main(){
	long long b,d,s,f;
	cin>>b>>d>>s;
	f=max({b,d,s})-1;
	cout<<max(f-s,0ll)+max(f-d,0ll)+max(f-b,0ll)<<endl;
}
