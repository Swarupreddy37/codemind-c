#include<stdio.h>
int main(){
	int n,i,j,min,tem,c=0;;
	scanf("%d",&n);
	int a[n],m[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++)  m[i]=a[i];
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(m[i]>m[j]){
				tem=m[i];
				m[i]=m[j];
				m[j]=tem;
		    }
		}
	}
	for(i=0;i<n;i++){
		if(m[i]!=a[i]){
			for(j=i+1;j<n;j++){
				if(m[i]==a[j]){ 
				    c++;
					tem=a[j];
					a[j]=a[i];
					a[i]=tem;
				}
		    }
		}
    }
    printf("%d",c);
}