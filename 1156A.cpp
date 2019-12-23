#include<stdio.h>
int n,a,l,ll,cnt=0;
int main() {
	scanf("%d",&n);
	while(n--) {
		scanf("%d",&a);
		if(a+l==5) {
			printf("Infinite\n");
			return 0;
		}
		if(l) cnt+=(a==1?l+1:(a==2?3-(ll==3):4));
		ll=l; l=a;
	}
	printf("Finite\n%d\n",cnt);
}
