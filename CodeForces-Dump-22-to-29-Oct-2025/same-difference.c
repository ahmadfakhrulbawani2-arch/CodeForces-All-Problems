// the logic is in the bottom
#include <stdio.h>
#include <string.h>

#define OFFSET 200000 // in case we got negative key for our freq index. This is from 2 * 10^5
#define MAX 400005  // 200000 for positive num freq and the rest for negative num freq. This is from 2 * 10^5

int freq[MAX];

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        memset(freq, 0, sizeof(freq)); // set all array freq to 0

        long long ans = 0;
        for (int i = 1; i <= n; i++) { // remember the indice is from 1 in codeforce default.
            int a;
            scanf("%d", &a);
            int key = a - i + OFFSET; // OFFSET prevent accesing negative index
            ans += freq[key];         // count how many it appears
            freq[key]++;              // records new key
        }

        printf("%lld\n", ans);
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1520/D

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

so we need to count how many a[j] - a[i] = j - i with j > i.

See that it's equals to a[j] - j = a[i] - i

So everytime a[i] - i = k and we found k again then the freq of k is 2

Suppose we found a[i] - i = k again, then the freq of k is 3 right?

Now how much pair is that? Because we print pair not freq of k.

See ans += freq[k] ? It'll count all the pairs. Sceptical?

so when freq[k] = 0 we add to ans so ans = 0 then we freq[k]++ so that freq[k] = 1.

We found k again and add the freq before so ans = freq[k] = 1. Now freq[k] = 2. This means that there's one pair(ans) because freq[k] appears twice (freq[k])

Then we found k again and add the ans with freq[k] first so ans = 1 + 2 = 3 then freq[k]++ which equals to 3. Now the answer is 3 pair because

k1 k2 k3
we can pair them into 3 pair that's k1--k2, k2--k3, k1--k3. This is always valid

freq[k] = 3. so ans = 3 + 3 = 6. Then freq[k]++ = 4

k1 k2 k3 k4
1: k1--k2
2: k1--k3
3: k1--k4
4: k2--k3
5: k2--k4
6: k3--k4
See it's equals to the ans which is 6

But remember that a-i is not always > 0, so we need to have that negative key. You can't use abs() because freq of a-i = -2 isn't equals to freq of a-i = 2

*/ 