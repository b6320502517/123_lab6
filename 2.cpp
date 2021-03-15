#include<stdio.h>
int main(){
	int n=4,i,j,k=0,a=0,b=0;
	if(n>=4&&n<=9)
		scanf("%d",&n);
	char x[2][n];
	for(i=0;i<2;i++)
		scanf(" %[^\n]s",x[i]);
	for(i=0;i<n;i++){
		if(x[0][i]==x[1][i])
			a++;
		else
			b++;
		
	}
	printf("%d %d",a,b);
	return 0;
}
