#include <stdio.h>
#include <string.h>

int main() {
    // input string
    char str[101];
    scanf("%s", str);

    // kelompokkan angka
    int angka[50] = {0};
    int i2 = 0;
    for(int i = 0; i < strlen(str); i+= 2) {
        angka[i2] = (int)str[i] - '0';
        i2++;
    }

    // sort angka dengan bubble sort
    int temp = 0;
    for(int i = 0; i < i2 - 1; i++) {
        for(int j = 0; j < i2 - i - 1; j++) {
            if(angka[j] > angka[j + 1]) {
                int temp = angka[j];
                angka[j] = angka[j + 1];
                angka[j + 1] = temp;
            }
        }
    }

    int j = 0;
    for(int i = 0; i < strlen(str); i++) {
        (i % 2 == 0) ? printf("%d", angka[j++]) : printf("+");
    }
    return 0;
}