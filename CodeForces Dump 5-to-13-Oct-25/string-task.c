#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[101];
    scanf("%s", str);

    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
        if(str[i] != 'a' && str[i] != 'o' && str[i] != 'y' && str[i] != 'e' && str[i] != 'u' && str[i] != 'i') {
            printf(".%c", str[i]);
        }
    }
}