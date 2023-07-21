#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	double n;
	cin>>n;
	double tmp=(double)(n-32)*5/9;
	int k=2;
	if((int)(tmp*100)%10==0){
		k--;
		if((int)(tmp*10)%10==0)k--;
	}
	if(k==2)printf("%.2lf",tmp);
	else if(k==1)printf("%.1
}