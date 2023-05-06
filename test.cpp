#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,int> mp;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        mp[a]=b;
    }
    int max=0;
    auto it1 =mp.begin();
    auto it2=it1;
    advance(it2,1);
    while(it2!=mp.end()){
        if((it2->first)<=(it1->second))max++;
        advance(it1,1);
        advance(it2,1);
    }
    cout<<max+1;
}