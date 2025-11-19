// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <stdio.h>

#define ll long long

int r, c;

void createBoard(char board[][c]) {
    char *s = board; int rec = 0;
    for(int i = 0; i < r; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < c; j++) {
                if(rec % 2 == 0) {
                    board[i][j] = 'B';
                } else {
                    board[i][j] = 'W';
                }
                rec++;
            }
        } else {
            for(int j = c-1; j >= 0; j--) {
                if(rec % 2 == 0) {
                    board[i][j] = 'B';
                } else {
                    board[i][j] = 'W';
                }
                rec++;
            }
        }
    }
}

void solve(char board[][c], char input[][c]) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(input[i][j] == '.') {
                printf("%c", board[i][j]);
            } else {
                printf("%c", input[i][j]);
            }
        }
        printf("\n");
    }
}

int main(void) {
    scanf("%d %d", &r, &c);
    char input[r][c], board[r][c];
    for(int i = 0; i < r; i++) {
        scanf("%s", input[i]);
    }

    createBoard(board);
    solve(board, input);
    return 0;
}

/* DP VERSION

#include <stdio.h>

int r, c;
char board[105][105];
int visited[105][105];

void dfs(int i, int j, char color) {
    // out of bounds
    if (i < 0 || j < 0 || i >= r || j >= c) return;

    // cek apakah sudah visited
    if (visited[i][j]) return;

    visited[i][j] = 1;
    board[i][j] = color;

    char next = (color == 'B' ? 'W' : 'B');

    lanjut ke semua arah (kanan, kiri, bawah, atas)
    dfs(i+1, j, next);
    dfs(i-1, j, next);
    dfs(i, j+1, next);
    dfs(i, j-1, next);
}

int main() {
    scanf("%d %d", &r, &c);

    char input[r][c];
    for(int i = 0; i < r; i++)
        scanf("%s", input[i]);

    dfs(0, 0, 'B');   // mulai dari pojok atas kiri

    // output sesuai input mask
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if (input[i][j] == '.')
                printf("%c", board[i][j]);
            else
                printf("%c", input[i][j]);
        }
        printf("\n");
    }
}


*/


/*

Link: https://codeforces.com/problemset/problem/445/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

Make the chess pattern first then print when input is '.' It's the most effective way (from me).

*/