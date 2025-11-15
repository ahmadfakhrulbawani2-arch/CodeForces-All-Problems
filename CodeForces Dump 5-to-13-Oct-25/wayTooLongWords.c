#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char words[105][105]; 
    char output[105][105]; 

    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    for (int i = 0; i < n; i++) {
        int len = strlen(words[i]);
        if (len > 10) {
            sprintf(output[i], "%c%d%c", words[i][0], len - 2, words[i][len - 1]);
        } else {
            strcpy(output[i], words[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s\n", output[i]);
    }

    return 0;
}
