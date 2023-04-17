#include<iostream>
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

long long modpow(long long x,long long n){              // tìm số dư của x mũ n cho mod;
    long long modpow=1;
    while(n!=0){
        if(n%2==1){
            modpow=(x*modpow)%mod;
        }
        n/=2;
        x=(x*x)%mod;
    }
    return modpow;
}

using namespace std;

int main(){
    long long n;
    cin>>n;
    cout<<modpow(2,n);
}