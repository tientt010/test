

#include<stdio.h>
#define mod 998244353

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


int main (){                                                                                                                         
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n+1];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(a[i]==0)x++;
        }
        for(int i=0;i<x;i++){                                           //đếm xem có bao nhiêu số 1 đang ở sai vị trí
            if(a[i]==1)y++;
        }
        long long ans=0;
        for(int i=0;i<=y;i++){
            ans=(ans+(modulo(i)*modulo(i))%mod);                        //tổng của các 1/i^2(viết dưới dạng số dư)
        }
        ans=((((((ans*(n-1))%mod)*n)%mod)*modulo(2))%mod);              //ans*(n*(n-1))/2
        printf("%lld\n",ans);
    }
    return 0;
}