#include <stdio.h>

int main() {
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);

    int score[105];

    for(int i = 0; i < n; ++i) {
        scanf("%d", &score[i]);
    }

    int kkm = score[k - 1];
    int num = 0;
    for(int i = 0; i < n; ++i) {
        if(score[i] >= kkm && score[i] > 0) {
            ++num;
        }
    }
    
    printf("%d", num);
    return 0;
}