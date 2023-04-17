#include<bits/stdc++.h>
using namespace std;

string lineEncoding(string s)
{
    string p;
    int n=s.size();
    int k=1;
    for(int i=0;i<n-1;i++){
        if(s[i+1]==s[i]){
            k++;
        }else{
            if(k==1)p=p+s[i];
            else p=p+(char)(k+48)+s[i];
            k=1;
        }
    }
    if(k!=1)p=p+(char)(k+48)+s[s.size()-2];
    else p=p+s[s.size()];
    return p;
}

int main(){
    string s;
    cin>>s;
    cout<<lineEncoding(s);
}