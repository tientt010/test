#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,m;
    multiset<int> tic;
    cin>>n>>m;
    int tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        tic.insert(tmp);
    }   
    vector<int> cus; 
    for(int i=0;i<m;i++){
        cin>>tmp;
        cus.push_back(tmp);
    }
   
    for(int x:cus){
        auto it=tic.upper_bound(x);
        if(it==tic.begin()){
            cout<<"-1"<<endl;
            continue;
        }
        advance(it,-1);
        cout<<*it<<endl;
        tic.erase(it);
    }
}