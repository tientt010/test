#include<stdio.h>
#include<math.h>

int main(){
    int n,q,d,t;
    scanf("%d%d%d%d",&n,&q,&d,&t);
    int a[10001],b[10001],c[10001];
    for(int i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    for(int i=0;i<q;i++){
        scanf("%d",&c[i]);
    }
    int p=0;
    for(int i=1;i<q;i++){
        int tmp=c[i]-c[i-1];
        p+=(tmp/2)+(tmp%2);
    }
    p+=(c[0]/2)+(c[0]%2);
    int tmp=d-c[q-1];
    p+=(tmp/2)+(tmp%2);
    if(p>t){
        printf("No hope!");
    }else{
        int max=c[0];
        for(int i=1;i<q;i++){
            int tmp=c[i]-c[i-1];
            if(tmp>max)max=tmp;
        }
        int tmp=d-c[q-1];
        int min=999999;
        if(tmp>max)max=tmp;
        for(int i=0;i<n;i++){
            if(b[i]>=max){
                if(a[i]<min)min=a[i];
            }
        }
        if(min!=999999)printf("%d",min);
        else printf("No hope!");
    }
}