#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    multiset<int> s;
    int n,x;
    cin>>n>>x;
    int tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        s.insert(tmp);
    } 
    int ans=0;
    for(auto it1=s.begin();it1!=s.end();it1++){
        int p=x-(*it1);
        auto it2=s.end();
        advance(it2,-1);
        int check=1;
      //  cout<<*it2<<endl;
        for(;it2!=it1;it2--){
            if(it2==it1)break;
            if((*it2)<=p){
                check=0;
   //             cout<<*it2<<endl;
                s.erase(it2);
                break;

            }
        }
        if(check==1){
            for(auto k:s){
                if(k>=(*it1))ans++;
            }
            break;
        }
        ans++;
    }
    cout<<ans;
}