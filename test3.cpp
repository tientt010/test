#include<stdio.h>
#include<math.h>

struct dathuc{
	int bac;
	int index;
};

int find(struct dathuc s[],int y,int n){
	for(int i=0;i<n;i++){
		if(s[i].bac==y)return i;
	}
	return -1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		struct dathuc s[10000];
		int x,y;
		int n=0;
		char c;
		int p=0;
		while(1){
			scanf("%d%c%c%c%d",&x,&c,&c,&c,&y);
			int tmp=find(s,y,n);
			if(tmp!=-1){
				s[tmp].index+=x;
			}else{
				s[n].bac=y;
				s[n].index=x;
				n++;
			}
			scanf("%c",&c);
			if(c==' '){
				scanf("%c%c",&c,&c);
			}else if(c=='\n')p++;
			if(p==2){
				p=0;
				break;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(s[i].bac<s[j].bac){
					struct dathuc f=s[i];
					s[i]=s[j];
					s[j]=f;
				}
			}
		}
		for(int i=0;i<n-1;i++){
			printf("%d*x^%d + ",s[i].index,s[i].bac);
		}
		printf("%d*x^%d\n",s[n-1].index,s[n-1].bac);
	}
	return 0;
}
