#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][3];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int allForces[100] = {0};
    for(int j = 0; j < 3; j++) {
        for(int i = 0; i < n; i++) {
            allForces[j] += arr[i][j];
        }
        j++;
    }

    int totForces = 0;
    for(int i = 0; i < 3; i++) {
        totForces += allForces[i];
    }

    (totForces == 0) ? printf("YES\n") : printf("NO\n");
    return 0;
}