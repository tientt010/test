#include<stdio.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int a[100][100];
    int hangmin=0;
    int min=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=a[i][j];
        }
        if(sum<min){
            min=sum;
            hangmin=i;
        }
    }
    printf("hang co tong nho nhat la %d",hangmin+1);
}