#include<stdio.h>
#include<string.h>
int partition(long long a[],int l,int r){
	long long x=a[l];														
	int i=l-1, j=r+1;												
	while(1){														
		do{
			i++;
		}while(a[i]<x);												
		do{
			j--;
		}while(a[j]>x);												
		if(i<j){
			long long tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;													
		}else return j;
	}
}
void quicksort(long long a[],int l,int r){
	if(l>=r)return;
	int p=partition(a,l,r);										
	quicksort(a,l,p);											
	quicksort(a,p+1,r);
}
void lat_nguoc (int a[],int n){
    int l=0,r=n-1;
    while(l<r){
        int tmp=a[l];
        a[l]=a[r];
        a[r]=tmp;
        l++;
        r--;
    }
}
void tinh_tong(char a[],char b[]){
    int n1=strlen(a),n2=strlen(b);
    int x[n1],y[n1],z[n1+1];
    for(int i=0;i<n1;i++)x[i]=a[i]-'0';
    for(int i=0;i<n2;i++)y[i]=b[i]-'0';
    lat_nguoc(x,n1);
    lat_nguoc(y,n2);
    for(int i=n2;i<n1;i++){
        y[i]=0;
    }
    int n=0;
    int nho=0;
    for(int i=0;i<n1;i++){
        int tmp=x[i]+y[i]+nho;
        z[n++]=tmp%10;
        nho=tmp/10;
    }
    if(nho==1){
        z[n++]=nho;
    }
    for(int i=n-1;i>=0;i--)printf("%d",z[i]);
}



int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char s[1000];
        gets(s);
        int n=strlen(s);
        int a[1000];
        int m=0;
        for(int i=0;i<n;i++){
            if(s[i]>='0'&&s[i]<='9'){
                a[m++]=(int)s[i]-'0';
            }
        }
        if(m==0){
            printf("0\n");
            continue;
        }
        

    }
}
