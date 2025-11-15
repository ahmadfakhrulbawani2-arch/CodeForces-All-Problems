#include <iostream>

int countDigit(int x) {
    for(int i = 1; i < 100; i *= 10) {
        int temp = 0;
        temp = x / i;
        int mod = x % i;
        int modTemp = temp % i;
        int luck = 0;
        if(temp == 0) {
            return luck;
        } 
        if((mod == 4 || mod == 7) && (modTemp == 0 || modTemp == 0)) {
            luck = 1;
        } else {
            luck = 0;
        }
    }
}

int main() {
    int n;
    std::cin >> n;

    int luckyNum = countDigit(n);
    int lucky = 1;

    // lucky = (n % 4 == 0 || n % 7 == 0) ? 1 : 0;

    if(lucky == 1 || luckyNum == 1) {
        std::cout << "YES\n";
        std::cout << luckyNum;
    } else {
        std::cout << "NO\n";
    }
    return 0;
}