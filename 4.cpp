#include<stdio.h>
int main(){
	int n=3,i,j,k;
	if(n>2&&n<=1000)
		scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
		scanf("%d %d",&a[i],&b[i]);
	return 0;
}
