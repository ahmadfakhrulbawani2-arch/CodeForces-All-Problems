#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    char answer[t][4];
    for(int i = 0; i < t; i++) {
        char str[7];
        scanf("%s", str);
        int front = str[0] + str[1] + str[2];
        int back = str[3] + str[4] + str[5];
        if(front == back) {
            strcpy(answer[i], "YES");
        } else {
            strcpy(answer[i], "NO");
        }
    }

    for(int i = 0; i < t; i++) {
        printf("%s\n", answer[i]);
    }
}