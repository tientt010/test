#include<iostream>
#include<cmath>
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
    int n,m,k;
    cin>>n>>m>>k;
    int a[200001],b[200001];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    quicksort(a,0,n-1);
    quicksort(b,0,m-1);
    int i=0,j=0;
    int count=0;
    while(i<n&&j<m){
        int p=abs(a[i]-b[j]);
        if(p<=k){
            count++;
            i++;
            j++;
        }else{
            if(a[i]>b[j])j++;
            else i++;
        }
    }
    cout<<count;

}