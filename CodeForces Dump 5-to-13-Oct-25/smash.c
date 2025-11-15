#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int result[1000] = {0};
    int resultId = 0;
    for(int i = 0; i < t; i++) {
        int arrLen;
        scanf("%d", &arrLen);
        int arr[arrLen];

        for(int j = 0; j < arrLen; j++) {
            scanf("%d", &arr[j]);
        }

        int temp[101] = {0};
        int diffNum = 0;
        for(int j = 0; j < arrLen; j++) {
            if(!temp[arr[j]]) {
                temp[arr[j]] = 1;
                diffNum++;
            }
        }
        result[resultId++] = 2 * diffNum - 1;
    }

    for(int i = 0; i < resultId; i++) {
        printf("%d\n", result[i]);
    }
    return 0;
}