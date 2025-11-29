#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        
        int totalDots = 0;
        vector<int> segs;
        for (int i = 0; i < n; ) {
            if (s[i] == '#') { ++i; continue; }
            int j = i;
            while (j < n && s[j] == '.') ++j;
            segs.push_back(j - i);
            totalDots += (j - i);
            i = j;
        }
        
        if (totalDots == 0) {
            cout << 0 << '\n';
            continue;
        }
        if (totalDots == 1) {
            cout << 1 << '\n';
            continue;
        }
        
        bool has_ge3 = false;
        for (int L : segs) if (L >= 3) { has_ge3 = true; break; }
        if (has_ge3) {
            cout << 2 << '\n';
            continue;
        }
        
        int ans = 0;
        for (int L : segs) {
            if (L == 1) ans += 1;
            else ans += 2; // L == 2 (we already know no L>=3 here)
        }
        cout << ans << '\n';
    }
    return 0;
}
