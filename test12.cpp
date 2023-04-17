#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        long long ans=(long long)2*n-1;
        ans=(long long)ans*n;
        if(t!=0)printf("%lld\n",ans);
        else printf("%lld",ans);
    }
}