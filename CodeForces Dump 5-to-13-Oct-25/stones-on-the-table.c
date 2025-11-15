#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char str[n];
    scanf("%s", str);

    int take = 0;
    for(int i = 0; i < n-1; i++) {
        if(str[i + 1] == str[i]) {
            take++;
        }
    }

    printf("%d", take);
    return 0;
}