#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
void ban_co(int a[26][26]){
    system("cls");
    cout<<"BAN CO CARO"<<endl;
    cout<<"i\\j ";
    for(int i=1;i<=25;i++){
        cout<<setw(3)<<left<<i;
    }
    cout<<endl;
    for(int i=1;i<=25;i++){
        cout<<setw(4)<<i;
        for(int j=1;j<=25;j++){
            if(a[i][j]==0)cout<<"-  ";
            if(a[i][j]==1)cout<<"O  ";
            if(a[i][j]==-1)cout<<"X  ";
        }
        cout<<endl;
    }
}
bool hang_ngang(int a[26][26],int e,int f){
    int x=a[e][f];
    int l=f-1;
    int count=1;
    while(a[e][l]==x){
        count++;
        l--;
    }
    int r=f+1;
    while(a[e][r]==x){
        count++;
        r++;
    }
    if(count<4)return false;
    int test=x*(-1);
    if((a[e][l]==test)||a[e][r]==test)return false;
    return true;
}
bool hang_doc(int a[26][26],int e,int f){
    int x=a[e][f];
    int tren=e+1;
    int count=1;
    while(a[tren][f]==x){
        count++;
        tren++;
    }
    int duoi=e-1;
    while(a[duoi][f]==x){
        count++;
        duoi--;
    }
    if(count<4)return false;
    int test=x*(-1);
    if(a[tren][f]==test||a[duoi][f]==test)return false;
    return true;
}
bool cheo1(int a[26][26],int e,int f){
    int x=a[e][f];
    int test=x*(-1);
    int count=1;
    int i=e-1;
    int j=f-1;
    while(a[i][j]==x){
        count++;
        i--;
        j--;
    }
    if(a[i][j]==test)return false;
    i=e+1;
    j=f+1;
    while(a[i][j]==x){
        count++;
        i++;
        j++;
    }
    if(a[i][j]==test)return false;
    if(count>=4)return true;
    return false;
}
bool cheo2(int a[26][26],int e,int f){
    int x=a[e][f];
    int test=x*(-1);
    int count=1;
    int i=e-1;
    int j=f+1;
    while(a[i][j]==x){
        count++;
        i--;
        j++;
    }
    if(a[i][j]==test)return false;
    i=e+1;
    j=f-1;
    while(a[i][j]==x){
        count++;
        i++;
        j--;
    }
    if(a[i][j]==test)return false;
    if(count>=4)return true;
    return false;
}
bool check(int a[26][26],int i,int j){
    if(hang_ngang(a,i,j))return true;
    if(hang_doc(a,i,j))return true;
    if(cheo1(a,i,j))return true;
    if(cheo2(a,i,j))return true;
    return false;
}
int main(){
    int s[26][26]={};
    ban_co(s);
    int e,f;
    while(1){
        printf("Den luot cua O, nhap vi tri muon danh (i j): ");
        scanf("%d%d",&e,&f);
        while(1){
            if(e<1||e>25||f<1||f>25||s[e][f]!=0){
                printf("Vi tri nhap khong hop le, vui long nhap lai (i j): ");
                scanf("%d%d",&e,&f);
            }else break;
        }
        s[e][f]=1;
        ban_co(s);
        if(check(s,e,f)){
            printf("Nguoi choi O da chien thang!\n");
            break;
        }
        printf("Den luot cua X, nhap vi tri muon danh (i j): ");
        scanf("%d%d",&e,&f);
        while(1){
            if(e<1||e>25||f<1||f>25||s[e][f]!=0){
                printf("Vi tri nhap khong hop le, vui long nhap lai (i j): ");
                scanf("%d%d",&e,&f);
            }else break;
        }
        s[e][f]=-1;
        ban_co(s);
        if(check(s,e,f)){
            printf("Nguoi choi X da chien thang!\n");
            break;
        }
    }
    return 0;
}