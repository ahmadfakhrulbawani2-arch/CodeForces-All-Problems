#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int passengerStop[1000] = {0};
    

    for(int i = 0; i < n; i++) {
        if(i > 0) {
            passengerStop[i] = passengerStop[i-1];
        }
        int a, b;
        scanf("%d %d", &a, &b);
        passengerStop[i] = passengerStop[i] - a + b;
    }
    int max = 0;
    for(int i = 0; i < n; i++) {
        max = (max < passengerStop[i]) ? passengerStop[i] : max;
    }

    printf("%d", max);
    return 0;
}