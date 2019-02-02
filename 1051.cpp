#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    
    double renda, roubo_parcelado, roubo_total = 0;
    int imposto;
    cin >> renda;
    
    if (renda >= 0.00 && renda <= 2000.00) {
        cout << "Isento" << endl;
    } else {
        if (renda > 2000.00) {
            imposto = 8;
            
            roubo_parcelado = (renda <= 3000.00)
                ? renda - 2000
                : (renda - fmod(renda, 1000.00)) / (int)(renda / 1000);
            
            roubo_total += roubo_parcelado * imposto / 100;
        }
        if (renda > 3000.00) {
            imposto = 18;
            
            roubo_parcelado = (renda <= 4500.00)
                ? renda - 3000.00
                : (renda - fmod(renda, 1500.00)) / (int)(renda / 1500.00);
            roubo_total += roubo_parcelado * imposto / 100;
        }
        if (renda > 4500.00) {
            imposto = 28;
            
            roubo_parcelado = (renda - 4500);
            roubo_total += roubo_parcelado * imposto / 100;
        }
        cout << "R$ " << roubo_total << endl;
    }
    
    return 0;
}