#include <iostream>

using namespace std;

int main() {
    int X;
    
    cin >> X;
    
    for (int i = 0; i < 6; i++) {
        if (X % 2 == 0) {
            X++;
        }
        cout << X << endl;
        X++;
    }
    
    return 0;
}