// the explanation is in the bottom
#include <stdio.h>

int minCheck(int a, int b) {
    return (a < b ? a : b);
}

int main(void) {
    int m, s;
    scanf("%d %d", &m, &s);

    if ((s == 0 && m > 1) || (s > 9 * m)) {
        printf("-1 -1\n");
        return 0;
    }


    int digit1[m], s2 = s-1, digit2[m];

    for(int i = m-1; i >= 0; i--) {
        digit2[i] = minCheck(9, s2);
        s2 -= digit2[i];
    }
   
    digit2[0]++;
    for(int i = 0; i < m; i++) {
        printf("%d", digit2[i]);
    }

    printf(" ");
    
    for(int i = 0; i < m; i++) {
        digit1[i] = minCheck(9, s);
        s -= digit1[i];
    }

    for(int i = 0; i < m; i++) {
        printf("%d", digit1[i]);
    }
    printf("\n");
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/489/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

To get smallest number:
    - s -= 1
    - Then from right to left (from i = m-1 to 0) pick smallest number between 9 and s. This is because 9 is the biggest number and s is the rest sum of number. And don't forget to save it in array (m is up to 100)
    - Then in every iteration substract s with the number you add.
    - At the end because we substract 1 from s, we add 1 in the first indices (digit[0]++) to make sure the sum is correct

To get biggest number:
    - Then from left to right (from i = 0 to m-1) pick smallest number between 9 and s. This is because 9 is the biggest number and s is the rest sum of number. And don't forget to save it in array (m is up to 100)
    - Then in every iteration substract s with the number you add.

*/