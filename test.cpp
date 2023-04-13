#include<bits/stdc++.h>

using namespace std;
int a[65536];

void test(int n,int l,int r){
    if(n==0)return;
    test(n-1,l,(l+r)/2-1);
    a[(l+r)/2]=n;
    test(n-1,(l+r)/2+1,r);
}

int main(){
    int n;
    cin>>n;
    int r=pow(2,n)-1; 
    test(n,0,r);
    bool s[n]={};
    for(int i=0;i<r;i++){
        for(int j=0;j<n;j++)cout<<s[j];
        cout<<endl;
        if(s[n-a[i]]==0)s[n-a[i]]=1;
        else s[n-a[i]]=0;
    }
    for(int j=0;j<n;j++)cout<<s[j];
}
