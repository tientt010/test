#include<stdio.h>
#include<string.h>
int partition(long long a[],int l,int r){
	long long x=a[l];														
	int i=l-1, j=r+1;												
	while(1){														
		do{
			i++;
		}while(a[i]<x);												
		do{
			j--;
		}while(a[j]>x);												
		if(i<j){
			long long tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;													
		}else return j;
	}
}
void quicksort(long long a[],int l,int r){
	if(l>=r)return;
	int p=partition(a,l,r);										
	quicksort(a,l,p);											
	quicksort(a,p+1,r);
}



int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char s[1000];
        gets(s);
        int n=strlen(s);
        int a[1000];
        int m=0;
        for(int i=0;i<n;i++){
            if(s[i]>='0'&&s[i]<='9'){
                a[m++]=(int)s[i]-'0';
            }
        }
        if(m==0){
            printf("0\n");
            continue;
        }
        long long ans=0;
        long long b[100000];
        int l=0;
        for(int i=m-1;i>=0;i--){
            int j=i-1;
            b[l++]=a[i];
            long long p=a[i];
            long long k=10;
            while(j>=0){
                p+=(long long)a[j]*k;
                b[l++]=p;
                k*=10;
                j--;
            }
        }
        quicksort(b,0,l-1);
        for(int i=0;i<l;i++){
            if(b[i]!=b[i+1])ans+=b[i];
        }
        printf("%lld\n",ans);
    }
}
