#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    
    if (a.length() - 1 >= b.length() - 1)
        cout << "go";
    else
        cout << "no";
    
    return 0;
}