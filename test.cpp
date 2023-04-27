#include<iostream>

using namespace std;
int ans=0;
int a[8][8];
bool b[8];
bool check(int c,int h){
    int i=h-1,j=c-1;
    while(i>=0&&j>=0){
        if(a[i][j]==1)return 1;
        i--;
        j--;
    }
    i=h+1;
    j=c-1;
    while(i<8&&j>=0){
        if(a[i][j]==1)return 1;
        i++;
        j--;
    }
    return 0;
}
void test(int c,int h){
    if(b[h])return;
    if(a[h][c]==-1)return;
    if(check(c,h))return;
	if(c==7){
		ans++;
		return;
	}
    b[h]=1;
    a[h][c]=1;
    for(int i=0;i<8;i++){
        test(c+1,i);	
    }
    b[h]=0;
    a[h][c]=0;
}

int main(){
    char x;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>x;
            if(x=='*')a[i][j]=-1;
            else a[i][j]=0;
        }
    }
    for(int i=0;i<8;i++){
        test(0,i);
    }
    cout<<ans;
}