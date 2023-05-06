#include<stdio.h>

struct sinhvien{
    int msv;
    char name[1000];
    float mona;
    float monb;
    float monc;
    float tongdiem;
};

void printDS(struct sinhvien s[],int n){
    for(int i=1;i<n;i++){
        printf("%d %s %.1f %.1f %.1f\n",s[i].msv,s[i].name,s[i].mona,s[i].monb,s[i].monc);
    }
}


int main(){
    struct sinhvien s[1000];
    int t;
    int n=1;
    while(1){
        scanf("%d",&t);
        if(t==1){
            int a;
            scanf("%d",&a);
            for(int i=0;i<a;i++){
                getchar();
                s[n].msv=n;
                gets(s[n].name);
                scanf("%f %f %f",&s[n].mona,&s[n].monb,&s[n].monc);
                s[n].tongdiem=s[n].mona+s[n].monb+s[n].monc;
                n++;
            }
            printf("%d\n",a);
        }
        if(t==2){
            int p;
            scanf("%d",&p);
            getchar();
            gets(s[p].name);
            scanf("%f%f%f",&s[p].mona,&s[p].monb,&s[p].monc);
            s[p].tongdiem=s[p].mona+s[p].monb+s[p].monc;
            printf("%d\n",p);
        }
        if(t==3){
            for(int i=1;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(s[i].tongdiem>s[j].tongdiem){
                        struct sinhvien tmp=s[i];
                        s[i]=s[j];
                        s[j]=tmp;
                    }
                }
            }
            printDS(s,n);
            break;
        }
    }
    return 0;

}