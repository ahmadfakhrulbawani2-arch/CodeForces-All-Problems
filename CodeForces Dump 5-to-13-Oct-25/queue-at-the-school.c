#include <stdio.h>

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    char queue[n];
    scanf("%s", queue);
    while(t--) {
        for(int i = 0; i < n-1; i++) {
            if(queue[i] == 'B' && queue[i+1] == 'G') {
                char temp = queue[i];
                queue[i] = queue[i+1];
                queue[i+1] = temp;
                i++;
            }
        }
    }
    printf("%s", queue);
    return 0;
}