#include<stdio.h>
void xuatmang(long long a[],int n){
	for(int i=0;i<n;i++){
		printf("%lld ",a[i]);
	}
}
int main(){
    int n; 
	scanf("%d",&n);
	long long a[n+1];
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		long long tmp=a[i];
		a[i]=a[min];
		a[min]=tmp;
		xuatmang(a,n);
		printf("\n");
	}
	return 0;
}