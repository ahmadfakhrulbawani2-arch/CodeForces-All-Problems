#include <stdio.h>
#include <string.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", arr);
    int res[100001] = {0};

    for(int i = 0; i < n; i++) {
        if(arr[i] == 'D') {
            res[i] = 1;
        } else if(arr[i] == 'A') {
            res[i] = -1;
        }
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += res[i];
    }

    if(sum == 0) {
        printf("Friendship\n");
    } else if(sum > 0) {
        printf("Danik\n");
    } else if(sum < 0) {
        printf("Anton\n");
    }
    return 0;
}