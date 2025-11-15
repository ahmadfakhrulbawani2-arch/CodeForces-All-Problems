#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int pol = 0, crime = pol;
    for(int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        if(pol == 0 && temp <= -1) {
            crime++;
        } else if(temp >= 1) {
            pol += temp;
        } else if(pol > 0 && temp == -1) {
            pol --;
        }
    }
    printf("%d", crime);
}