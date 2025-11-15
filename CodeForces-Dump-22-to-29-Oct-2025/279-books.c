/*

As usual this is not efficient way 

#include <stdio.h>

int main(void) {
    int n, t;
    scanf("%d %d", &n, &t);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    int total = 0, idx = 0;
    while(t > 0) {
        total++;
        t -= arr[idx++];
    }
    printf("%d\n", total-1);
    return 0;
}

*/

#include <stdio.h>

int main(void) {
    int n, t;
    scanf("%d %d", &n, &t);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    // instead of sorting we sum up all and just skip if it's too big

    int sum = 0, idx = 0, max = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        // if sum is > t means that sub array from arr[0] to i need to be shifted and make sure it's < t
        while(sum > t) {
            sum -= arr[idx++];
            // we remove the leftmost element.
        }
        if(i - idx + 1 > max) max = i-idx+1;
        // because i = n-1 and l is the left most books so the amount of books is i-idx. I notice it's -1 from the answer lol.
        // remember this is a loop, the if-statement above make sure it's maximum
    }
    printf("%d\n", max);
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/279/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-14-to-21-Oct-25

Sometimes I forgot to change the link. Sorry
*/