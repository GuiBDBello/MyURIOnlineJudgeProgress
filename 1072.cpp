#include <iostream>
 
using namespace std;
 
int main() {
    int N, X, dentro = 0, fora = 0;
    
    cin >> N;
    
    if (N < 10000) {
        for (int i = 0; i < N; i++) {
            cin >> X;
        
            if (X > -10000000 && X < 10000000) {
                if (X >= 10 && X <= 20) {
                    dentro++;
                } else {
                    fora++;
                }
            }
        }
        cout << dentro << " in" << endl;
        cout << fora << " out" << endl;
    }
    
    return 0;
}