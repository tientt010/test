#include<stdio.h>

struct test{
    int so;
    int tong;
};

int tongchuso(int x){
    int ans=0;
    while(x>0){
        ans+=(x%10);
        x/=10;
    }
    return ans;
}

int main(){
    int n;
    scanf("%d",&n);
    struct test a[1000];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i].so);
        a[i].tong=tongchuso(a[i].so);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i].tong>a[j].tong){
                struct test tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i].so);
    }

}