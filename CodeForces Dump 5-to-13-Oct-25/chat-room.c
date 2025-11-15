#include <stdio.h>
#include <string.h>

int main() {
    char halo[] = "hello";
    char input[101];
    scanf("%s", input);
    int len = strlen(input);

    int j = 0;
    for(int i = 0; i < len; i++) {
        if(input[i] == halo[j]) {
            j++;
        } 
    }

    (j == 5) ? printf("YES\n") : printf("NO\n");
    return 0;
}