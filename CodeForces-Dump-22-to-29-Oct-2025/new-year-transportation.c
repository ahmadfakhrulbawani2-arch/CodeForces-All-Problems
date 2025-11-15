#include <stdio.h>

int main(void) {
    int n, t;
    scanf("%d %d", &n, &t);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int pos = 1;
    do {
        pos += arr[pos-1];
    } while(pos < t);
    
    if(pos == t) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/500/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/