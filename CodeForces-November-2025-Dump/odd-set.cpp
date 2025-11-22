// بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// اللَّهُمَّ صَلَّ عَلَى سَيِّدِنَا مُحَمَّدٍ.
// the explanation is in the bottom

#include <iostream>

void solve() {
    int n;
    std::cin >> n;
    int arr[2*n], even = 0, odd = 0;
    for(int i = 0; i < 2*n; i++) {
        std::cin >> arr[i];
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    
    if(even == odd) std::cout << "Yes\n";
    else std::cout << "No\n";
}

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        solve();
    }
    return 0;    
}



/*

Link: https://codeforces.com/problemset/problem/1542/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-All-Problems
Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===
At first I thought I can sum all elements because I thought if you see this patern:

n = 2 --> odd + odd = even (n is also even)
n = 3 --> odd + odd + odd = odd (n is also odd)
n = 2 --> odd + odd + odd + odd = even (n is also even)

Then I realized that even is actually obtained in 2 ways:
odd + odd or even + even. Hence why if n is even we should notice the pair is actually combination of even + even pair or odd + odd pair. If even + even then it's not valid.

That's why the exact way is to count odd element and even element. If it's the same then output yes otherwise output no
Because odd is always obtained from odd + even (always pair of odd and even) so the pair must be odd + even to be always odd!

*/