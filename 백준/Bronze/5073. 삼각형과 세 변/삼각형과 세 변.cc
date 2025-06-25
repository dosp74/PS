#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    
    while (!(x == 0 && y == 0 && z == 0)) {
        if (max(x, max(y, z)) >= (x + y + z - (max(x, max(y, z))))) {
            cout << "Invalid\n";
            
            cin >> x >> y >> z;
            
            continue;
        }
        
        if (x == y && y == z)
            cout << "Equilateral\n";
        else if (x != y && y != z && z != x)
            cout << "Scalene\n";
        else
            cout << "Isosceles\n";
        
        cin >> x >> y >> z;
    }
    
    return 0;
}