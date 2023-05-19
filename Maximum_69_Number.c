#include<stdio.h>
int reverse(int n) {
    int rev = 0;
    while(n > 0){
        int rem = n %10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}
int main() {
    int n;
    scanf("%d",&n);
    int a = reverse(n);
    int rev = 0, flag = 0, rem;
    while (a > 0) {
        rem = a % 10;
        if (rem == 6 && flag == 0){ 
            rem = 9;
            flag = 1;
        }
        rev = rev * 10 + rem;
        a /= 10;
    }
    printf("%d",rev);
}