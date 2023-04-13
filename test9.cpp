#include<stdio.h>
#define mod 1000000007
long long modulo(long long x){                          // tìm nghịch đảo modulo của số x
    long long tmp=mod-2;
    long long modulo=1;
    while(tmp!=0){
        if(tmp%2==1){
            modulo=(x*modulo)%mod;   
        }
        tmp/=2;
        x=(x*x)%mod;
    }
    return modulo % mod;
}

int main(){
    unsigned long long n;
    unsigned long long ans=1;
    scanf("%llu",&n);
    for(unsigned long long i=1;i<n;i++){
        ans=(((ans*(n+i))%mod)*(modulo(i)%mod))%mod;
    }
    ans=((ans*2)%mod);
    ans=((ans-n)%mod);
    printf("%llu",ans);
}