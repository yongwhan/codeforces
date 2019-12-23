#include<bits/stdc++.h>
using namespace std;
string str[2][200];
int main(){
	int a; scanf("%d",&a);
	if(a%2) {
		cout<<-1<<"\n";
		return 0;
	}
	for (int i=0;i<a;i++)
		for (int j=0;j<a;j++)
			if ((i/2+j/2)%2) str[0][i]+='b', str[1][i]+='w';
			else str[0][i]+='w', str[1][i]+='b';
	for (int i=0;i<a;i++) {
		for (int j=0;j<a;j++)
			cout<<str[i%2][j]<<"\n";
		cout<<"\n";
	}
}
