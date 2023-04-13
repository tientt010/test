#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        long long k=-1;
        if(n%2==1)k=2;
        else{
            long long m=sqrt(2*n);
            for(long long i=3;i<=m;i++){
                if((2*n)%i==0){
                    if((n%i==0)&&(i%2!=0)){
                        k=i;
                        break;
                    }else if(i%4==0){
                        k=i;
                        break;
                    }
                }
            }
        }
        printf("%lld\n",k);
    }
}