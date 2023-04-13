#include<stdio.h>
#include<math.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int a[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++)scanf("%d",&a[i][j]);
    }

    int b[y][x];
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++)scanf("%d",&b[i][j]);
    }
    int c[x][x];
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            int sum=0;
            for(int k=0;k<y;k++){
                sum+=(a[i][k]*b[k][j]);
            }
            c[i][j]=sum;
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
}