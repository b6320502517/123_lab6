#include<stdio.h>
int main(){
	int n=1,i,j,k,m;
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
	k=f[0];
	for(i=0;i<n;i++){
		if(k>f[i]){
			k=f[i];
			m=i;
		}			
	}
	printf("%s",s[m]);
	return 0;
}
