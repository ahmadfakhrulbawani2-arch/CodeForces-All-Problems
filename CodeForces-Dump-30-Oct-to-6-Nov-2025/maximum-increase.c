#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxLen = 1, curr = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i-1]) {
            curr++;
            maxLen = (maxLen < curr) ? curr : maxLen;
        }
        else curr = 1;
    }

    printf("%d\n", maxLen);
    return 0;
}
