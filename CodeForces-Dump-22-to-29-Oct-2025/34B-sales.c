#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int prices[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    // bubble sort ascend;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(prices[j] > prices[j+1]) {
                int temp = prices[j];
                prices[j] = prices[j+1];
                prices[j+1] = temp;
            }
        }
    }

    int sum = 0;
    for(int i = 0; i < m && prices[i] < 0; i++) sum += prices[i];
    sum *= -1;
    printf("%d", sum);
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/34/B
Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/ 