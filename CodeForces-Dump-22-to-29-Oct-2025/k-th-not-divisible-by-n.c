#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n, k;
        scanf("%lld %lld", &n, &k);
        long long answer = k + (k - 1) / (n - 1);
        printf("%lld\n", answer);
    }
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/1352/C

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/

/*

3 7
1 2 4 5 7 8 10

4 12
1 2 3 5 6 7 9 10 11 13 14 15

7 97
97 99 100 101 102 103 104 106 107 108 109 110 111 112 

3  = 0 0 0 1 1
6  = 0 0 1 1 0
9  = 0 1 0 0 1
12 = 0 1 1 0 0 
15 = 0 1 1 1 1

1 2 3 5 6 7 9 10 11 13 14 15

2 10
1 3 5 7 9 11 13 15 17 19

so this is the logic:
k is in k position in normal sequence. If there's some numbers we skip (this problem scenario) then
k is in k+(count numbers we skip). 
To count how many numbers we skip we use common sense

consider n = 4
then 
1,2,3
5,6,7
9,10,11

so there's a block of legit number. In the block there's n-1 numbers right?

Now each block we skip one number (that's divisible by 4).

So to count all the numbers we skip we count all numbers of block!

See that 1,2,3 is a block. Now to count it as single box we had to find what formula from the number that result 1

Notice 1,2,3 there's n-1 numbers or 4-1 = 3 numbers. So to get the result 1, we need to divide n-1 by 3. 

Now here's the magic

what if k = 4?
so we divide n-1 by k-1 right?
And we get the result 1

Now the real answer if n = 4 and k = 4 is 5
1,2,3,5
Notice 5 is also k+1?
k+(count numbers we skipped, which is 1)
And so count numbers we skipped = ((k-1)/(n-1))
And that's valid guys

if n = 4 and k = 7 then the answer is = 7 + ((7-1)/(4-1)) = 7 + 2 = 9
1,2,3,5,6,7,9


*/