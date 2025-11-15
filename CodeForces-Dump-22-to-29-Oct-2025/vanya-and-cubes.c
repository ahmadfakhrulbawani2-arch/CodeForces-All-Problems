#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int currCubes = 0;
    int idx = 0; // will be the height
    while(currCubes < n) {
        idx++;
        currCubes += idx * (2 + (idx-1)) / 2;
        if(currCubes > n) idx--;
    }

    printf("%d\n", idx);
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/492/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/


/*

1
1 2 = 3
1 2 3 = 6
1 2 3 4 = 10

*/