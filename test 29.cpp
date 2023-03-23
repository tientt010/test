#include<iostream>

using namespace std;
int main(){
	int t;
	cin>>t;
    unsigned long long *a=new unsigned long long();
	for(int i=t-1;i>=0;i--){
		cin>>a[i];
	}
	while(t--){
		unsigned long long n;
		int i=0;
		int x;
		int *b=new int();
		while(a[t]!=0){
			x=a[t]%2;
			b[i]=x;
			i++;
			a[t]=a[t]/2;
		}
		int a=0; 
		while(i--){
			if(b[i]!=0){
				i++;
				break;
			}
		}
		while(i--){
			cout<<b[i];
		}
		cout<<endl;
	}
	return 0;                                                                                  
}