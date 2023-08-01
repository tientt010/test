#include<bits/stdc++.h>
int partition(int a[],int l,int r){
	int x=a[l];														
	int i=l-1, j=r+1;												
	while(1){														
		do{
			i++;
		}while(a[i]<x);												
		do{
			j--;
		}while(a[j]>x);												
		if(i<j){
			int tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;													
		}else return j;
	}
}
void quicksort(int a[],int l,int r){
	if(l>=r)return;
	int p=partition(a,l,r);										
	quicksort(a,l,p);											
	quicksort(a,p+1,r);
}



using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[101],b[101];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        quicksort(a,0,n-1);
        quicksort(b,0,n-1);
        int check =1;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                check=0;
                break;
            }
        }
        if(check==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}