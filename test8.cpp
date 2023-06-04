#include<stdio.h>
void xuatmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
    int n; 
	scanf("%d",&n);
	int a[100];
	int b[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int j=i;
		b[j]=a[i];
		while(j>0){
			if(b[j]<b[j-1]){
				int tmp=b[j];
				b[j]=b[j-1];
				b[j-1]=tmp;
			}
			j--;
		}
		xuatmang(b,i+1);
		printf("\n");
	}
	
	return 0;
}