#include<stdio.h>
int main() {
	int n=0,i,m=0;
	int a[3];
	for(i=0;i<3;i++){
	 scanf("%d",&a[i]);
    }
	int b[3];
	for(i=0;i<3;i++){
	 scanf("%d",&b[i]);
    }
	for(i=0;i<3;i++){
	if(a[i]>b[i]) m++;
		 else if(b[i]>a[i]) n++;	
	}
	printf("%d %d",m,n);
}