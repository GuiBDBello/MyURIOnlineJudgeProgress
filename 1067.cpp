#include <iostream>
 
using namespace std;
 
int main() {
    int X;
    
    cin >> X;
    
    if (X >= 1 && X <= 1000) {
        for (int i = 1; i <= X; i++) {
            if (i % 2 != 0) {
                cout << i << endl;
            }
        }
    }
    
    return 0;
}