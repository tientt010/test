#include<stdio.h>
#include<string.h>
//Ý tưởng của thuật toán:
//chuyển 2 mảng kiểu char về mảng kiểu int
//lật ngược 2 mảng kiểu int
//chuẩn hóa cho chúng có cùng số chữ số bằng cách thêm số 0 vào số có số chữ số nhỏ hơn
//tiến hành phép cộng như lớp 1

void lat_nguoc (int a[],int n){
    int l=0,r=n-1;
    while(l<r){
        int tmp=a[l];
        a[l]=a[r];
        a[r]=tmp;
        l++;
        r--;
    }
}
void tinh_tong(char a[],char b[]){
    int n1=strlen(a),n2=strlen(b);
    int x[n1],y[n1],z[n1+1];
    for(int i=0;i<n1;i++)x[i]=a[i]-'0';
    for(int i=0;i<n2;i++)y[i]=b[i]-'0';
    lat_nguoc(x,n1);
    lat_nguoc(y,n2);
    for(int i=n2;i<n1;i++){
        y[i]=0;
    }
    int n=0;
    int nho=0;
    for(int i=0;i<n1;i++){
        int tmp=x[i]+y[i]+nho;
        z[n++]=tmp%10;
        nho=tmp/10;
    }
    if(nho==1){
        z[n++]=nho;
    }
    for(int i=n-1;i>=0;i--)printf("%d",z[i]);
}
int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char a[1001],b[1001];
        gets(a);
        gets(b);
        if(strlen(a)>strlen(b))tinh_tong(a,b);
        else tinh_tong(b,a);
        printf("\n");
    }

}