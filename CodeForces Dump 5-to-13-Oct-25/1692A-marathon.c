#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // count tc
    int arr[t]; // output all
    int mar[4]; // input each tc

    for(int i = 0; i < t; i++) {
        arr[i] = 0;
        for(int j = 0; j < 4; j++) {
            scanf("%d", &mar[j]);
            int tim = mar[0];
            if(tim < mar[j]) {
                arr[i]++;
            }
        }
    }

    // print
    for(int i = 0; i < t; i++) {
        printf("%d\n", arr[i]);
    }
}