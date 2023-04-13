#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long res=1;
    for(long long i=1;i<=n;i++){
        res+=n+i;
        res/=i;
        res%=1000000007;
    }
    printf("%lld",res);
    return 0;
}