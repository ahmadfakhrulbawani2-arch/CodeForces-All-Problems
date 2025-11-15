// the explanation is in the bottom
#include <stdio.h>

#define MAXN 200000
typedef long long ll;

ll a[MAXN];
ll b[MAXN];

// --- Fast Input ---
static inline int read_int(void) {
    int x = 0, neg = 0;
    int c = getchar_unlocked();
    while (c != '-' && (c < '0' || c > '9')) c = getchar_unlocked();
    if (c == '-') {
        neg = 1;
        c = getchar_unlocked();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + (c - '0');
        c = getchar_unlocked();
    }
    return neg ? -x : x;
}

static inline ll read_ll(void) {
    ll x = 0;
    int neg = 0;
    int c = getchar_unlocked();
    while (c != '-' && (c < '0' || c > '9')) c = getchar_unlocked();
    if (c == '-') {
        neg = 1;
        c = getchar_unlocked();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + (c - '0');
        c = getchar_unlocked();
    }
    return neg ? -x : x;
}

// --- Custom quicksort ---
void quicksort(ll arr[], int l, int r) {
    if (l >= r) return;
    ll pivot = arr[(l + r) / 2];
    int i = l, j = r;
    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) {
            ll tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
    if (l < j) quicksort(arr, l, j);
    if (i < r) quicksort(arr, i, r);
}

// --- upper_bound ---
int upper_bound(ll arr[], int n, ll target) {
    int l = 0, r = n;
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] <= target)
            l = mid + 1;
        else
            r = mid;
    }
    return l;
}

int main(void) {
    int n = read_int();
    int m = read_int();

    for (int i = 0; i < n; i++) a[i] = read_ll();
    for (int i = 0; i < m; i++) b[i] = read_ll();

    quicksort(a, 0, n - 1);

    for (int i = 0; i < m; i++) {
        int cnt = upper_bound(a, n, b[i]);
        printf("%d", cnt);
        if (i + 1 < m) putchar(' ');
    }
    putchar('\n');

    return 0;
}




/*

Link: https://codeforces.com/problemset/problem/600/B

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-November-2025-Dump

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/