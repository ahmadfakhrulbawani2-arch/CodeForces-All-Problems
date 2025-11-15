#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101], cek[201];
    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", cek);

    int freq[26] = {0};

    // tambah huruf dari str1 dan str2
    for (int i = 0; i < strlen(str1); i++) {
        freq[str1[i] - 'A']++;
    }
    for (int i = 0; i < strlen(str2); i++) {
        freq[str2[i] - 'A']++;
    }

    // kurangi huruf dari cek
    for (int i = 0; i < strlen(cek); i++) {
        freq[cek[i] - 'A']--;
    }

    // cek apakah semua 0
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}
