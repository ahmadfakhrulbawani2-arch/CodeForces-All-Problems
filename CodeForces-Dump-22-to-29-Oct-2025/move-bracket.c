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

        int balance = 0;
        int minBalance = 0;

        for (int i = 0; i < n; i++) {
            if (str[i] == '(') balance++;
            else balance--;
            if (balance < minBalance) minBalance = balance;
        }
        minBalance *= -1;
        printf("%d\n", minBalance);
    }
    return 0;
}



/*

Link: https://codeforces.com/problemset/problem/318/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

* So in this problem we find a balance in the string that is () or (()) considered balance (amount of '(' equals to amount of ')')

* In the problem stated that "In the third test case of the example, it is sufficient to move the last bracket to the beginning of the string." This means that we only move the opening bracket

* Also this: In the fourth test case of the example, we can choose last three openning brackets, move them to the beginning of the string and obtain "((()))(())".


* And because everytime we found '(' we do balance--, we print the lowest balance (because we only move bracket at a time, so for n bracket, we need n times move)

*/