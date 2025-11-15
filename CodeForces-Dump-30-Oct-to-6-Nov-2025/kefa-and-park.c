// the explanation is in the bottom
#include <stdio.h>
#include <string.h>

#define NMAX 100005
#define EDGEMAX (2*NMAX)

int head[NMAX];
int to[EDGEMAX];
int nxt[EDGEMAX];
int edgeCount = 0;
int haveCat[NMAX];
int m;
int res = 0;

void add_edge(int u, int v) {
    to[edgeCount] = v;
    nxt[edgeCount] = head[u];
    head[u] = edgeCount++;
}

void dfs_logic(int node, int parent, int consecutive) {
    if(haveCat[node]) consecutive++;
    else consecutive = 0;

    if(consecutive > m) return;

    int childCount = 0;
    for(int i = head[node]; i != -1; i = nxt[i]) {
        int v = to[i];
        if(v == parent) continue;
        childCount++;
        dfs_logic(v, node, consecutive);
    }

    if(childCount == 0) {
        res++;
    }
}

int main(void) {
    memset(head, -1, sizeof(head));

    int n;
    
    scanf("%d %d", &n, &m);

    for(int i = 1; i <= n; i++) {
        scanf("%d", &haveCat[i]);
    }

    for(int i = 0; i < n-1; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        add_edge(x, y);
        add_edge(y, x);
    }

    dfs_logic(1, 0, 0);

    printf("%d\n", res);
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/580/C1

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-30-Oct-to-6-Nov-2025 

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/