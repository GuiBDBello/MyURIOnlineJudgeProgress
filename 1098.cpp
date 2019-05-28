#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
    
    double i = 0, j = 1, limit = 3;
    
    for (i = 0; i <= 2; i += 0.2) {
        for (j = j + i; j <= limit + i; j++) {
            if (fmod(i, 1.0) == 0 || fmod(j, 1.0) == 0) {
                cout << fixed << setprecision(0);
            } else {
                cout << fixed << setprecision(1);
            }
            cout << "I=" << i << " J=" << j << endl;
        }
        
        j = 1;
    }
 
    return 0;
}