
#include<bits/stdc++.h>

using namespace std;

unsigned long long test(int x){
    unsigned long long ans=1;
    for(int i=0;i<x;i++){
        ans*=10;
    }
    return ans;
}
int main(){
    int m;
    cin>>m;
    unsigned long long a[1000];
    for(int i=0;i<m;i++)cin>>a[i];
    map<unsigned long long,unsigned long long> mp;
    unsigned long long p=1;
    unsigned long long n=1;
    while(n<=18){
        mp[p]=n;
        unsigned long long tmp2=(unsigned long long)(test(n-1)*n*9);
        p+=tmp2;
        n++;
    }
    auto it=mp.begin();
    for(int i=0;i<m;i++){
        it=mp.upper_bound(a[i]);
        advance(it,-1);
        unsigned long long tmp=(*it).second;
        //cout<<(*it).first;
        unsigned long long p=a[i]-(*it).first;
        unsigned long long d=p/tmp;
        unsigned long long mod=p%tmp;
        unsigned long long x=(unsigned long long)pow(10,tmp-1);
        x+=d;
        string s=to_string(x);
        cout<<s[mod]<<endl;

    }
}