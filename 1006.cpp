#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(1);
    
    double A, B, C, MEDIA;
    int p1 = 2, p2 = 3, p3 = 5;
    
    cin >> A, B, C;
    
    while (A < 0.0 || A > 10.0) {
        cin >> A;
    }
    while (B < 0.0 || B > 10.0) {
        cin >> B;
    }
    while (C < 0.0 || C > 10.0) {
        cin >> C;
    }
    
    MEDIA = ((A * p1) + (B * p2) + (C * p3)) / (p1 + p2 + p3);
    cout << "MEDIA = " << MEDIA << endl;
    return 0;
}