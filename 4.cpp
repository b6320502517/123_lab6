#include<stdio.h>
int main(){
	int n=3,i,max,min;
	if(n>2&&n<=1000)
		scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
		scanf("%d %d",&a[i],&b[i]);
	max=a[0];
	min=b[0];
	for(i=1;i<n;i++){
       if(max<a[i])
        	max=a[i];
        if(min>b[i])
        	min=b[i];
   }
   printf("%d%d",max,min);
	return 0;
}
