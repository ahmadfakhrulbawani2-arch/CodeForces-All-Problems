// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// THIS IS AI Generated

#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    int ones = 0;

    // Convert array:
    //   0 -> +1 (gain)
    //   1 -> -1 (loss)
    int gain[n];
    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
            ones++;
            gain[i] = -1;
        } else {
            gain[i] = 1;
        }
    }

    // Kadane's algorithm
    int best = -1000000000;
    int current = 0;

    for(int i = 0; i < n; i++) {
        current = MAX(gain[i], current + gain[i]);
        best = MAX(best, current);
    }

    // If best < 0, flipping hurts, but we MUST flip exactly one segment.
    // So answer = ones - 1 at minimum.
    int result = ones + best;

    printf("%d\n", result);

    return 0;
}
