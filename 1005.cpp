#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision(1);
    double A, B, MEDIA;
    
    cin >> A, B;
    while (A < 0.0 || A > 10.0) {
        cin >> A;
    }
    while (B < 0.0 || B > 10.0) {
        cin >> B;
    }
    
    MEDIA = ((A * 3.5) + (B * 7.5)) / 11;
    cout << fixed << setprecision(5) << "MEDIA = " << MEDIA << endl;
    
    return 0;
}