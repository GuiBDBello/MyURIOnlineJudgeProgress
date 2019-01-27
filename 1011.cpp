#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision(3);

    double R, volume, pi = 3.14159;
    cin >> R;
    
    volume = (4.0 / 3.0) * pi * pow(R, 3);
    cout << "VOLUME = " << volume << endl;
    return 0;
}