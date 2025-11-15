#include <stdio.h>
#include <string.h>

int main() {
    char str1[101];
    int order[26] = {0};
    scanf("%s", str1);

    int len = strlen(str1);
    for(int i = 0; i < len; i++) {
        if(str1[i] >= 'A' && str1[i] <= 'Z') {
            order[str1[i] - 'A'] = 1;
        } else if(str1[i] >= 'a' && str1[i] <= 'z') {
            order[str1[i] - 'a'] = 1;
        }
    }

    int sum = 0;
    for(int i = 0; i < 26; i++) {
        sum += order[i];
    }

    if(sum % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }
    return 0;
}