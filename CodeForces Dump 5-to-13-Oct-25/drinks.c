#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_NUMERIC, "C");
    int n;
    scanf("%d", &n);
    double total = 0.0, x;

    for (int i = 0; i < n; i++) {
        scanf("%lf", &x);
        total += x;
    }

    printf("%.12lf\n", total / n);
    return 0;
}
