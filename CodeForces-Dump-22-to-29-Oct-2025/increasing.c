#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        long long arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    long long temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        int has_duplicate = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                has_duplicate = 1;
                break;
            }
        }

        if (has_duplicate)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
