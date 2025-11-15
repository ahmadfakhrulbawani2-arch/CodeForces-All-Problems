#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int a, b, c;
    int numProb = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a >> b >> c;
    
        if(a + b + c >= 2) {
            numProb += 1;
        }    
    }

    cout << numProb;
    
    return 0;
}