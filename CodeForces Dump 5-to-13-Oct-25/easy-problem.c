#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 1) {
            printf("HARD\n");
            return 0;
        }
    }
    printf("EASY\n");
    return 0;
}