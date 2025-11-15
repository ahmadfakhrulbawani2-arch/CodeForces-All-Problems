#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int countGroup = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int same = 0;
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] == arr[i+1]) {
            same = 1;
        } else {
            same = 0;
            countGroup++;
        }
    }

    if(same = 1) {
        countGroup++;
    }

    printf("%d", countGroup);
    return 0;
}