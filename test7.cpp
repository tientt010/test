#include<stdio.h>
# define mod 1000000007

long long powmod(int x,int n){
    long long ans=1;
    while(n>0){
        if(n%2!=0){
            ans=(ans*x)%mod;
        }
        n/=2;
        x=(x*x)%mod;
    }
    return ans%mod;
}

long long test(int m){
    if(m==1)return 3;
    return test(m-1)*3%mod;
}
int main(){
    int n;
    scanf("%d",&n);
    int m=n/2;
    char a='"'
}