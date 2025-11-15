#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    char res[t][21];

    for(int i = 0; i < t; i++) {
        int a;
        scanf("%d", &a);
        char arr[a];
        scanf("%s", arr);
        int b;
        scanf("%d", &b);
        char arr2[b];
        scanf("%s", arr2);
        char arr3[b];
        scanf("%s", arr3);
        char total[a+b];
        strcpy(total, arr);
        int len = strlen(total);
        
        for(int j = 0; j < b; j++) {
            switch (arr3[j])
            {
            case 'V':
                for(int k = len - 1; k >= 0; k--) {
                    total[k+1] = total[k];
                }
                total[0] = arr2[j];
                len++;
                break;
            case 'D':
                total[len] = arr2[j];
                len++;
                break;
            default:
                break;
            }
        }
        total[a+b] = '\0';
        strcpy(res[i], total);
    }
    
    for(int i = 0; i < t; i++) {
        printf("%s\n", res[i]);
    }
    return 0;
}