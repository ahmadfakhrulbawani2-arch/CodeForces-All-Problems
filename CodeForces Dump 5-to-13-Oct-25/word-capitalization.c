#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1001];

    scanf("%s", str);

    str[0] = (str[0] >= 'A' && str[0] <= 'Z') ? str[0] : toupper(str[0]);

    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        printf("%c", str[i]);
    }
    return 0;
} 