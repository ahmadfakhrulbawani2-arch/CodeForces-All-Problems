#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int len = n + 1;
    char str[len];
    int abj[26] = {0};
    scanf("%s", str);

    for(int i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
        abj[str[i] - 'a'] = 1;
    }

    int sum = 0;
    for(int i = 0; i < 26; i++) {
        sum += abj[i];
    }

    if(sum == 26) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}