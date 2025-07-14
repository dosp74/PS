#include <iostream>
using namespace std;

int main() {
    int month, day;
    cin >> month >> day;
    
    if (month == 2 && day == 18) {
        cout << "Special";
    }
    else if (month == 1 || (month == 2 && day < 18)) {
        cout << "Before";
    }
    else {
        cout << "After";
    }
    
    return 0;
}