#include<stdio.h>

unsigned long long counttamgiac(unsigned long long n){
    if(n==3)return 4;
    unsigned long long p=n%3;
    unsigned long long q;
    if(p==0)q=(unsigned long long)n/3;
    else q=(unsigned long long)n/3+1;
    return (unsigned long long)q*(unsigned long long)(p+n)/2+(unsigned long long)counttamgiac(n-2);
}

int main(){
    unsigned long long n;
    scanf("%llu",&n);
    unsigned long long ans=0;
    n=(unsigned long long)2*n-1;
    for( long long i=n;i>=0;i-=2){
        for(long long j=i;j>0;j-=3){
            ans+=j;
        }
    }
    printf("%llu",ans);
}