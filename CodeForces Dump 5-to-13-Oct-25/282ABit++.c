#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int num = 0;
    for (int i = 0; i < n; ++i) {
        char x[10];
        scanf("%s", x);

        if (strstr(x, "++") != NULL) {
            ++num;
        } else if (strstr(x, "--") != NULL) {
            --num;
        }
    }

    printf("%d\n", num);
    return 0;
}
