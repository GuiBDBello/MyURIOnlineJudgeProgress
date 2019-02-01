#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    
    if (fmod(a, b) == 0 || fmod(b, a) == 0) {
        cout << "Sao Multiplos" << endl;
    } else {
        cout << "Nao sao Multiplos" << endl;
    }
    
    return 0;
}