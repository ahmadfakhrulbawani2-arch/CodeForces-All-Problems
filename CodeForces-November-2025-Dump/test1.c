#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 10;
    int *b = &a;
    int **c = &b;
    printf("alamat a : %d\n", &a); // alamat a
    printf("isi dari a : %d\n", a); // 10
    printf("alamat b : %d\n", &b); // alamat b
    printf("isi dari b: %d\n", b); // alamat a
    printf("isi pada isi b: %d\n", *b); // 10
    printf("alamat c : %d\n", &c); // alamat c
    printf("isi dari c : %d\n", c); // alamat b
    printf("isi pada isi c: %d\n", *c); // alamat a
    printf("isi pada isi pada isi c: %d\n", **c); // 10
}