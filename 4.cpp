#include<stdio.h>
int main(){
	int n=3,i,j,x=1,max,min;
	if(n>2&&n<=1000)
		scanf("%d",&n);
	int a[n][2],b[n]={};
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			if(x>=1&&x<n)
				scanf("%d",&x);
			a[i][j]=x;
		}	
	}	
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			if((i+1)==a[i][j]){
				b[i]++;
			}	
		}
	}	
	max=b[0];
	min=b[0];
	for(i=0;i<n;i++){
       if(max<b[i]){
       		max=b[i];
	   }
        	
        if(min>b[i]){
        	min=b[i];
		}
        	
   }
   printf("%d%d",max,min);
	return 0;
}
