#include<stdio.h>
int main(){
	int n,i,j,sum,max=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++) {
		sum=0;
		for(j=i;j<n;j++) {
			sum+=a[j];
			if(max<sum) max=sum;
		}
	}
	if(max==0) {
		max=a[0];
		for(i=0;i<n;i++) if(max<a[i]) max=a[i];
	}
	printf("%d",max);
}