#include <stdio.h>
#include <math.h>

int main() {
    int arr[10000][20];
    int k = 0, l = 0;

    printf("\nThis are the list of all prime numbers from 1 up to 1M\n");
    printf("\n");

    for (int i = 2; i <= 1000000; i++) {
        int rooti = (int)sqrt(i);
        int cek = 1;
        for (int j = 2; j <= rooti; j++) {
            if (i % j == 0) {
                cek = 0;
                break;
            }
        }

        if (cek) {
            arr[k][l] = i;
            l++;
            if (l == 20) {
                k++;
                l = 0;
            }
            if (k >= 10000) {
                break;
            }
        }
    }

    for (int n = 0; n <= k; n++) {
        int batas = (n == k) ? l : 20;
        for (int o = 0; o < batas; o++) {
            printf("%d ", arr[n][o]);
        }
        printf("\n");
    }

    printf("\nTHAT'S IT, THAT'S ALL PRIME NUMBERS YOU CAN IMAGINE WKWKWKWK");

    return 0;
}
