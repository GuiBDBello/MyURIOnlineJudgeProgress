#include <iostream>
 
using namespace std;
 
int main() {
    
    int i = 1, j;
 
    while(i <= 9) {
        for (j = 7; j >= 5; j--) {
            cout << "I=" << i << " J=" << j << endl;
        }
        i+=2;
    }
    return 0;
}