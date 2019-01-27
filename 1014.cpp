#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(3);
    
    int X;
    double Y, consumo;
    cin >> X >> Y;
    
    consumo = X / Y;
    
    cout << consumo << " km/l" << endl;
    return 0;
}