#include<stdio.h>
int main(){
	int n=1,i,j,k;
	if(n>=1&&n<=10000)
		scanf("%d",&n);
	char s[n][1000],f[n]={};
	for(i=0;i<n;i++)
		scanf(" %[^\n]s",s[i]);
	for(i=0;i<n;i++){
		for(j=0;j<26;j++){
			if((s[i][0]==65+j)||(s[i][0]==97+j))
				f[i]=j+1;
			}
	}
	return 0;
}
