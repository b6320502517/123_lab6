#include<stdio.h>
int main(){
	long i,j,k,n,q,l=0;
	scanf("%ld %ld",&n,&q);
	char a[n];
	long c[n]={};
	long x[q],y[q];
	for(i=0;i<q;i++){
		scanf(" %c %ld %ld",&a[i],&x[i],&y[i]);
		if(a[i]=='P')
			l++;
	}
	for(i=0;i<q;i++)
	return 0;
}
