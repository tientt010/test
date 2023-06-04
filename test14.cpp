#include<iostream>
 
int countso2(int n){
    int countso2=0;
    while(n%2==0){
        countso2++;
        n/=2;
    }
    return countso2;
}
 
int countso5(int n){
    int countso5=0;
    while(n%5==0){
        countso5++;
        n/=5;
    }
    return countso5;
}

int countso10(int n){
    int countso10=0;
    while(n%10==0){
        countso10++;
        n/=10;
    }
    return countso10;
}
 
using namespace std;
int main(){
    int count2=0;
    int count5=0;
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        count2+=countso2(i);
        count5+=countso5(i);
    }
    if(count2>count5)cout<<count5;
    else cout<<count2;
}