#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	char ch, mn='z';
	while(cin>>ch)
		mn=min(mn,ch), cout<<(mn==ch?"Mike":"Ann")<<endl;
	return 0;
}
