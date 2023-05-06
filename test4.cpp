#include<stdio.h>
#include<string.h>
int main(){
	int solama[200];
	solama['I']=1;
	solama['V']=5;
	solama['X']=10;
	solama['L']=50;
	solama['C']=100;
	solama['D']=500;
	solama['M']=1000;
	int t;
	scanf("%d",&t);
	while(t--){
		getchar();
		char s[5000];
		scanf("%s",s);
		int n=strlen(s);
		int sothapphan=0;
		for(int i=n-2;i>=0;i--){
			if(solama[(int)s[i]]>=solama[(int)s[i+1]]){
				sothapphan+=solama[(int)s[i]];
			}else sothapphan-=solama[(int)s[i]];
		}	
		sothapphan+=solama[(int)s[n-1]];
		printf("%d\n",sothapphan);
	}
	return 0;
}