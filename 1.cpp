#include<stdio.h>
int main(){
	int n=1,i,j,k,m;
	if(n>=1&&n<=10000)
		scanf("%d",&n);
	char s[n][1000],f[n]={},mi[n]={};
	for(i=0;i<n;i++)
		scanf(" %[^\n]s",s[i]);
	for(j=0;j<26;j++){
		for(i=0;i<n;i++){
			if((s[i][0]==65+j)||(s[i][0]==97+j))
				//f[i]=j+1;
				printf("%s\n",s[i]);
			}
	}
	/*for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(f[j]>f[j+1]){
			k=f[j];
			f[j]=f[j+1];
			mi[i]=f[j+1];
			f[j+1]=k;
		}
		}	
	}
	for(i=0;i<n;i++)
		printf("%s",s[mi[i]]);*/
	return 0;
}
