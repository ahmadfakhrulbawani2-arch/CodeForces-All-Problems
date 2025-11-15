#include <stdio.h>
#include <strings.h>

int main() {
    int t;
    scanf("%d", &t);
    char input[t][4];
    char yes[] = "YES";
    for(int i = 0; i < t; i++) {
        scanf("%s", input[i]);
    }
    for(int i = 0; i < t; i++) {
        if(strcasecmp(input[i], yes) == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}