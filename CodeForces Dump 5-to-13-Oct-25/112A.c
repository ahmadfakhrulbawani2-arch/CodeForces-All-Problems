#include <stdio.h>
#include <string.h>

int main() {
    char str1[105];
    char str2[105];
    scanf("%s", str1);
    scanf("%s", str2);

    for(int i = 0; i < strlen(str1); ++i) {
        if(str1[i] > 90) {
            str1[i] - 32;
        }
        if(str2[i] > 90) {
            str2[i] - 32;
        }
    }

    int tot1 = 0, tot2 = 0;
    for(int i = 0; i < strlen(str1); ++i) {
        str1[i] += tot1;
        str2[i] += tot2;
    }
    int cek = 0;
    cek = (tot1 > tot2 && tot1 - tot2 != 0) ? 1 : -1;

    printf("%d", cek);
}