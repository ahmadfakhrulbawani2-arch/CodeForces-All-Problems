#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    int i = 0;

    while(n > 0) {
        if(n >= 100) {
            n -= 100;
            i++;
        } else if(n >= 20) {
            n -= 20;
            i++;
        } else if(n >= 10) {
            n -= 10;
            i++;
        } else if(n >= 5) {
            n -= 5;
            i++;
        } else {
            n--;
            i++;
        }
    }

    printf("%d", i);
    return 0;
}