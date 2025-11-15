#include <stdio.h>
#include <string.h>

int main() {
    char arr1[101];
    char arr2[101];
    char result[101];

    scanf("%s", arr1);
    scanf("%s", arr2);
    int len = strlen(arr1);

    for(int i = 0; i < len; i++) {
        if(arr1[i] == arr2[i]) {
            result[i] = '0';
        } else {
            result[i] = '1';
        }
    }

    for(int i = 0; i < len; i++) {
        printf("%c", result[i]);
    }
    return 0;
}