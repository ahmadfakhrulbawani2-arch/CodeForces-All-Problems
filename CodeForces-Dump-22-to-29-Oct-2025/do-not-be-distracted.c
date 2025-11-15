// the explanation is in the bottom
#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char str[n + 1];
        scanf("%s", str);

        int valid = 1, solvedFreq[26] = {0}, prevTask = str[0];
        for (int i = 1; i < n; i++) {
            if(str[i] != prevTask) solvedFreq[prevTask - 'A']++;
            if(solvedFreq[str[i] - 'A']) {
                valid = 0;
                break;
            }
            prevTask = str[i];
        }

        if (valid) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1520/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

Mark solved task using freq marking. If the current string appears before then it's not valid.

*/