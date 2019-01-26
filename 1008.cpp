#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    
    int number, hours_worked;
    double hour_income, salary;
    cin >> number >> hours_worked >> hour_income;
    
    salary = hours_worked * hour_income;
    cout << "NUMBER = " << number << "\nSALARY = U$ " << salary << endl;
    return 0;
}