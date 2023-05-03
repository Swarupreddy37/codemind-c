#include<stdio.h>
int main(){
	int n,i,sum,su,j,max,b;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i<n;i++) {
		sum=0;
		for(j=i;j<n;j++) {
			sum+=a[j];
			if(max<sum) max=sum;
		}
	}
	sum=0;
	for(i=0;i<n;i++) sum+=a[i];
	for(i=0;i<n;i++) {
		su=0;
		for(j=i+1;j<n-1;j++) {
			su+=a[j];
			b=sum-su;
			if(max<b) max=b;
		}
    }
    printf("%d",max);
}