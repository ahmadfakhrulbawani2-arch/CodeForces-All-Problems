// the explanation is in the bottom
#include <stdio.h>
#include <string.h>

char keyboard[31] = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main(void) {
    char lr; char str[105];
    scanf(" %c", &lr);
    getchar();
    scanf("%s", str);
    if(lr == 'R') {
        int len = strlen(str);
        for(int i = 0; i < len; i++) {
            for(int j = 0; j < 30; j++) {
                if(str[i] == keyboard[j]) {
                    str[i] = keyboard[j-1];
                    break;
                }
            }
        }
    } else {
        int len = strlen(str);
        for(int i = 0; i < len; i++) {
            for(int j = 0; j < 30; j++) {
                if(str[i] == keyboard[j]) {
                    str[i] = keyboard[j+1];
                    break;
                }
            }
        }
    } 
    printf("%s\n", str);
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/474/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/