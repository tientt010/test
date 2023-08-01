#include<bits/stdc++.h>


using namespace std;

string rotate(string x,int n){
    int m=0;
    for(int i=0;i<n;i++){
        m+=(x[i]-'A');
    }
    for(int i=0;i<n;i++){
        int p=(x[i]-'A'+m)%26;
        x[i]=(char)(p+'A');
    }   
    return x;
}

string merge(string a,string b,int n){
    for(int i=0;i<n;i++){
        int p=(a[i]-'A'+b[i]-'A')%26;
        a[i]=(char)(p+'A');
    }
    return a;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        n/=2;
        string a=s.substr(0,n);
        string b=s.substr(n,2*n-1);
        a=rotate(a,n);
        b=rotate(b,n);
        a=merge(a,b,n);
        cout<<a<<endl;
    }
}