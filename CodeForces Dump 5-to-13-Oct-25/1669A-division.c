#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int arr[t];
    for(int i = 0; i < t; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < t; i++) {
        if(arr[i] <= 1399) {
            printf("Division 4\n");
        } else if(arr[i] >= 1400 && arr[i] <= 1599) {
            printf("Division 3\n");
        } else if(arr[i] >= 1600 && arr[i] <= 1899) {
            printf("Division 2\n");
        } else {
            printf("Division 1\n");
        }
    }
}