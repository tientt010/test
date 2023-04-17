#include<stdio.h>
#include<math.h>

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



int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    char q='"';
    if(a[n-1]>=(a[0]+a[1])||(a[0]>=(a[n-1]+a[1])||a[1]>=(a[0]+a[n-1])))printf("%cCO%c",q,q);
    else printf("%cKHONG%c",q,q);   
}