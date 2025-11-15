#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[101];
    scanf("%s", str);

    int len = strlen(str), upperCase = 0, lowerCase = 0;
    for(int i = 0; i < len; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            upperCase += 1;
        } else if(str[i] >= 'a' && str[i] <= 'z') {
            lowerCase += 1;
        }
    }

    if(upperCase <= lowerCase) {
        for(int i = 0; i < len; i++) {
            str[i] = tolower(str[i]);
        }
    } else if(lowerCase < upperCase){
        for(int i = 0; i < len; i++) {
            str[i] = toupper(str[i]);
        }
    }

    for(int i = 0; i < len; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}