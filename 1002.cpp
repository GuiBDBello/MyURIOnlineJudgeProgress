#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double area, n = 3.14159, raio;
    
    cin >> raio;
    
    area = n * pow(raio, 2);
    
    cout << fixed << setprecision(4) << "A=" << area << endl;
    return 0;
}