#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a > b && a > c && b > c) {
        cout << c << endl;
        cout << b << endl;
        cout << a << endl;
    } else if (a > b && a > c && b < c) {
        cout << b << endl;
        cout << c << endl;
        cout << a << endl;
    } else if (a < b && a > c && b > c) {
        cout << c << endl;
        cout << a << endl;
        cout << b << endl;
    } else if (a < b && a < c && b > c) {
        cout << a << endl;
        cout << c << endl;
        cout << b << endl;
    } else if (a > b && a < c && b < c) {
        cout << b << endl;
        cout << a << endl;
        cout << c << endl;
    } else if (a < b && a < c && b < c) {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}