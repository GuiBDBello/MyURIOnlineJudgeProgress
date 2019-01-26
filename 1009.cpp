#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    
    string name;
    double fixed_salary, total_sales, commission = 15.0, total;
    cin >> name >> fixed_salary >> total_sales;
    
    total = fixed_salary + (total_sales * commission / 100);
    cout << "TOTAL = R$ " << total << endl;
    return 0;
}