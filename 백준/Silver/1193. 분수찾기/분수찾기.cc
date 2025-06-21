#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;
    
    int sum = 2;
    int count = 0;
    
    if (X == 1) {
        cout << 1 << "/" << 1;
        
        return 0;
    }
    
    while (count != X) {
        if (sum % 2 == 0) {
            int son = sum - 1;
            int mother = 1;
            
            while (son > 0) {
                count++;
                
                if (count == X) {
                    cout << son << "/" << mother;
                    
                    return 0;
                }
                
                son--;
                mother++;
            }
        }
        else {
            int son = 1;
            int mother = sum - 1;
            
            while (mother > 0) {
                count++;
                
                if (count == X) {
                    cout << son << "/" << mother;
                    
                    return 0;
                }
                
                son++;
                mother--;
            }
        }
        sum++;
    }
    
    return 0;
}