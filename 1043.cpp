#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(1);
    double a, b, c, aux, area, perimetro;
    cin >> a >> b >> c;
    
    aux = a - b;
    if ((a - b) < 0) {
        aux = (a - b) * -1;
    }
    if (aux < c && c < (a + b)) {
        perimetro = a + b + c;
        cout << "Perimetro = " << perimetro << endl;
    } else {
        area = ((a + b) * c) / 2;
        cout << "Area = " << area << endl;
    }
    return 0;
}