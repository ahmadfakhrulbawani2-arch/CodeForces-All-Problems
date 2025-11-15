// the explanation is in the bottom
#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    long long a[n];

    long long total = 0;
    for(long long i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        total += a[i];
    }

    if(total % 3 != 0) {
        printf("0\n");
        return 0;
    }

    long long one_third = total / 3;
    long long two_third = one_third * 2;
    long long sum = 0, cnt = 0, ans = 0;

    for(long long i = 0; i < n - 1; i++) {
        sum += a[i];
        if(sum == two_third) ans += cnt;
        if(sum == one_third) cnt++;
    }

    printf("%lld\n", ans);
    return 0;
}



/*

Link: https://codeforces.com/problemset/problem/466/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

If n < 3 or sum % 3 != 0 means it's impossible to distribute the element to 3 subarray.

So when we distribute the element to 3 part, the first part sum must be sum / 3 (a third of it) then the next prefix sum of second part must be sum*2/3 (a two third of it).

But be careful to loop until n-2 index because we don't care about the last element (last element always in last element so does with first element but we need to count the prefix from the first element)

*/