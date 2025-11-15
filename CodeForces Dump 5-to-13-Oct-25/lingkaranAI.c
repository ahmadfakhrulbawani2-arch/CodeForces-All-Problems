#include <stdio.h>
#include <math.h>
#include <string.h>

#define ROWS 40
#define COLS 81
#define SPACING 2 // Karena ada spasi, 2 karakter per titik (misalnya "* ")

void drawCircle(char canvas[ROWS][COLS]) {
    // Inisialisasi kanvas dengan spasi
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS - 1; j++) {
            canvas[i][j] = ' ';
        }
        canvas[i][COLS - 1] = '\0'; // Null-terminator untuk setiap baris (string)
    }

    // Pusat dan Jari-jari (disesuaikan dengan skala)
    // Pusat y = tengah baris = 40 / 2 = 20
    // Pusat x = tengah kolom (dalam unit * / spasi) = (81 - 1) / 2 / 2 = 40 / 2 = 20
    int center_y = ROWS / 2;
    int center_x_unit = (COLS - 1) / SPACING / 2;
    int radius_unit = 18; // Jari-jari, disesuaikan agar lingkaran muat
    int radius_squared = radius_unit * radius_unit;

    // Iterasi melalui setiap posisi potensial di kanvas
    for (int y = 0; y < ROWS; y++) {
        for (int x_unit = 0; x_unit < (COLS - 1) / SPACING; x_unit++) {
            // Hitung jarak kuadrat dari pusat dalam unit
            int dy = y - center_y;
            int dx = x_unit - center_x_unit;
            int dist_sq = dx * dx + dy * dy;

            // Jika jarak kuadrat sangat dekat dengan jari-jari kuadrat
            // kita anggap itu bagian dari lingkaran.
            // Toleransi kecil digunakan untuk mengatasi diskritisasi piksel.
            if (fabs(dist_sq - radius_squared) <= radius_unit / 2) {
                // Konversi unit x ke indeks kolom aktual (x * 2 untuk * dan spasi)
                int col_index = x_unit * SPACING;
                
                // Pastikan tidak melampaui batas array
                if (col_index < COLS - 1) {
                    canvas[y][col_index] = '*';
                    // Spasi sudah ada secara default, kita tidak perlu menimpanya
                    // jika kita hanya menempatkan * di posisi genap
                }
            }
        }
    }
}

void printCanvas(char canvas[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        printf("%s\n", canvas[i]);
    }
}

int main() {
    // Array string (40 baris, setiap baris bisa menampung 80 karakter + \0)
    char canvas[ROWS][COLS]; 

    // Menggambar pola
    drawCircle(canvas);

    // Menampilkan pola
    printf("Pola Lingkaran dengan Karakter '*' dipisahkan Spasi:\n\n");
    printCanvas(canvas);

    return 0;
}