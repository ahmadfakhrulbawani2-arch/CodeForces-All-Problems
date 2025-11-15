#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];
    scanf("%s", str1);
    scanf("%s", str2);

    int compare = strcasecmp(str1, str2);

    if(compare == 0) {
        printf("0\n");
    } else if(compare > 0) {
        printf("1\n");
    } else {
        printf("-1\n");
    }

    return 0;
}