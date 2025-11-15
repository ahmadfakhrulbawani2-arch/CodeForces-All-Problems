#include <stdio.h>
#include <string.h>

int main() {
    int t = 0;
    scanf("%d", &t);
    getchar();
    char str[t][200001];

    for(int i = 0; i < t; i++) {
        int len = 0;
        scanf("%d", &len);
        fgets(str[i], len, stdin);
    }

    printf("\n");
    for(int i = 0; i < t; i++) {
        for(int j = 0; j < 100; j++) {
            printf("%c", str[i][j]);
        }
    }
    return 0;
}