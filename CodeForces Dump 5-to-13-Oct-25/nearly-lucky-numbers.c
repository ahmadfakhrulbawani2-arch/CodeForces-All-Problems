#include <stdio.h>

int main() {
    // Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.

    long long n;
    scanf("%lld", &n);

    int luckNum = 0;
    while(n > 0) {
        int mod = n % 10;
        if(mod == 4 || mod == 7) {
            luckNum++;
        }
        n /= 10;
    }

    (luckNum == 4 || luckNum == 7) ? printf("YES\n") : printf("NO\n");

    return 0;
}