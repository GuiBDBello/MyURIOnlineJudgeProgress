#include <iostream>
 
using namespace std;
 
int main() {
    int N, squareroot = 0;
    
    cin >> N;
    
    if (N > 5 && N < 2000) {
        for (int i = 1; i <= N; i++) {
            if (i % 2 == 0) {
                squareroot = i * i;
                cout << i << "^2 = " << squareroot << endl;
            }
        }
    }
    
    return 0;
}