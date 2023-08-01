#include<bits/stdc++.h>

using namespace std;

bool test(int a[],int n,int i,int x,int y){
	if(x==y&&x!=0)return 1;
	if(i>n)return 0;
	return test(a,n,i+1,x+a[i],y)||test(a,n,i+1,x,y+a[i]);

}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[100];
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		//if(sum%2==0){
		//	sum/=2;
			if(test(a,n-1,0,0,0))cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}//else cout<<"NO"<<endl;
	}
