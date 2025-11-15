#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int result[t];

    for(int i = 0; i < t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if(a % b != 0) {
            int temp = a / b;
            temp++;
            result[i] = b * temp - a;
        } else {
            result[i] = 0;
        }
    }

    for(int i  = 0; i < t; i++) {
        printf("%d\n", result[i]);
    }
    return 0;
}