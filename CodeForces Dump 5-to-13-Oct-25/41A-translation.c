#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];
    scanf("%s", str1);
    scanf("%s", str2);
    int len2 = strlen(str2);
    int len1 = strlen(str1);

    if(len1 != len2) {
        printf("NO\n");
        return 0;
    }
    for(int i = 0; i < len2; i++) {
        if(str1[i] != str2[len2 - i - 1]) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}