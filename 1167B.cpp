#include<bits/stdc++.h>
using namespace std;
int a[10];
int main() {
	int g=0;
	for (int i=2;i<6;i++) {
		printf("? 1 %d\n",i);
		fflush(stdout);
		cin>>a[i];
		g=__gcd(g,a[i]);
	}
	if (g==30 || g==46)
		g/=2;
	printf("! %d ",g);
	int p=g;
	for (int i=2;i<6;i++)
		printf("%d ",a[i]/g), p*=a[i]/g;
	printf("%d\n",4*8*15*16*23*42/p);
	return 0;
}
