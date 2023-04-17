#include<stdio.h>

long long same(long long x){
    long long count=0;
    if(x<10)return x;
    long long socuoi=x%10;
    long long sodau;
    long long y=x;
    while(y>0){
        sodau=y%10;
        y/=10;
    }
    if(sodau<=socuoi)count=9+(x/10);
    else count=8+(x/10);
    return count;
}

int main(){
    long long l,r;
    scanf("%lld%lld",&l,&r);
    r=same(r);
    l=same(l-1);
    printf("%lld",r-l);
    return 0;
}