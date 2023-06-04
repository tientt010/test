#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char c[100];
    gets(c);
    char* token = strtok(c," ");
    while(token!=NULL){
        cout<<token<<"\n";
        token =strtok(NULL," ");
    }
}
