#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[105];
    double tinggi;
    int umur;
} Kartu;

void swapKrt(Kartu krt[], int a, int b) {
    Kartu tKrt;
    tKrt = krt[a-1];
    krt[a-1] = krt[b-1];
    krt[b-1] = tKrt;
}


int main(void) {
    int n;
    scanf("%d", &n);
    getchar();
    Kartu krt[n];

    for(int i = 0; i < n; i++) {
        char tmp[105];
        scanf("%s", tmp);
        getchar();
        strcpy(krt[i].nama, tmp);
        scanf("%lf", &krt[i].tinggi);
        scanf("%d", &krt[i].umur);
    }

    int m; 
    scanf("%d", &m);

    for(int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        // Kartu tKrt;

        // strcpy(tKrt.nama, krt[a-1].nama);
        // tKrt.umur = krt[a-1].umur;
        // tKrt.tinggi = krt[a-1].tinggi;

        // strcpy(krt[a-1].nama, krt[b-1].nama);
        // krt[a-1].tinggi = krt[b-1].tinggi;
        // krt[a-1].umur = krt[b-1].umur;

        // strcpy(krt[b-1].nama, tKrt.nama);
        // krt[b-1].tinggi = tKrt.tinggi;
        // krt[b-1].umur = tKrt.umur;

        swapKrt(krt, a, b);
    }

    for(int i = 0; i < n; i++) {
        printf("%s\n%.2lf\n%d\n", krt[i].nama, krt[i].tinggi, krt[i].umur);
    }
    return 0;
}