#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d", &t);
    char answer[t][3];
    for(int i = 0; i < t; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a + b == c) {
            strcpy(answer[i], "+");
        } else if(a - b == c) {
            strcpy(answer[i], "-");
        }
    }

    for(int i = 0; i < t; i++) {
        printf("%s\n", answer[i]);
    }
    return 0;
}