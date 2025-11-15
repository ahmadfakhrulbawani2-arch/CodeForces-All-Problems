#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t;
    scanf("%d", &t);
    char str[t + 1];
    int res[26] = {0};

    for(int i = 0; i < t; i++) {
        scanf(" %c", &str[i]); // don't forget add space;
    }

    for(int i = 0; i < t; i++) {
        str[i] = tolower(str[i]);
    }

    for(int i = 0; i < t; i++) {
        if(str[i] == 'c' || str[i] == 'o' || str[i] == 'd' || str[i] == 'e' || str[i] == 'f' || str[i] == 'r' || str[i] == 's') {
            res[i] = 1;
        }
    }

    for(int i = 0; i < t; i++) {
        (res[i] == 1) ? printf("YES\n") : printf("NO\n");
    }

    return 0;
}