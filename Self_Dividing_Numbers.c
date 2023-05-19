#include<stdio.h>
int isdividing(int a) {
    int c = 0, temp = a, b = 0;
    while(a != 0) {
        int rem = a % 10;
        b++;
        if (rem != 0) {
            if (temp % rem == 0) c++;
        }
        a /= 10;
    }
    if (c == b) return 1;
    else return 0;
}
int main() {
    int n,m;
    scanf("%d%d", &n,&m);
    for (int i = n ; i <= m ; i++) {
        if (isdividing(i)) printf("%d ",i);
    }
}