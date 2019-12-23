#include<bits/stdc++.h>
using namespace std;

int main(){
	int hh,mm,H,D,C,N;
	cin>>hh>>mm>>H>>D>>C>>N;
	cout << (hh<20?min(((D*((44-hh)%24*60-mm)+H)+N-1)/N*C*.8,(H+N-1)/N*C*1.0):(H+N-1)/N*C*.8) << endl;
	return 0;
}
