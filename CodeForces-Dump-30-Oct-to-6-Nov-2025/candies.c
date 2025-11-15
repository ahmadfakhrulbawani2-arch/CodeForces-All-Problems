// the explanation is in the bottom
#include <stdio.h>
#include <math.h>

int divi(int n) {
    return pow(2, n) - 1;
}

int main(void) {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);
        for(int k = 2; k <= 40; k++) { // se explanation
            int divisor = divi(k);
            if(n % divisor == 0) {
                printf("%d\n", n/divisor);
                break;
            }
        }
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1343/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

max val of n is 10^9 we can decompose into (2 * 5)^9 

which is 2^9 * 5^9 from here we can see that value of k is reaching 9.

Then from 5^9 decompose it to (2 * 2.5)^9 which is again k is reaching 9.

Notice there's 2.5 ^ 9 we can consider the k value here is around 15 or something.

But we do know that 10^9 = 2^9 * 2^9 * 2.5^9. And we can say that k can reach 9 * 3 or about 30. Let's say 40 is the max value of k.

*/