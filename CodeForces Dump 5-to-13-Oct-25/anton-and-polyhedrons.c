#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char arr[n][15];

    long long sides = 0;
    for(int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
        if(strcmp(arr[i], "Tetrahedron") == 0) {
            sides += 4;
        } else if(strcmp(arr[i], "Cube") == 0) {
            sides += 6;
        } else if(strcmp(arr[i], "Octahedron") == 0) {
            sides += 8;
        } else if(strcmp(arr[i], "Dodecahedron") == 0) {
            sides += 12;
        } else if(strcmp(arr[i], "Icosahedron") == 0) {
            sides += 20;
        }

    }

    // for(int i = 0; i < n; i++) {
    //     printf("%s", arr[i]);
    // }
    printf("%lld", sides);
    return 0;
}