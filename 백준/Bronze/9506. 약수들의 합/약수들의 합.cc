#include <iostream>
#include <list>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int current = 0;
    list<int> divisors;
    
    while (n != -1) {
        current = 0;
        divisors.clear();
        
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                current += i;
                divisors.push_back(i);
            }
        }
        
        if (current == n) {
            cout << n << " = ";
            
            for (auto it = divisors.begin(); it != divisors.end(); it++) {
                cout << *it;
                
                if (next(it) != divisors.end())
                    cout << " + ";
            }
            
            cout << "\n";
        }
        else
            cout << n << " is NOT perfect.\n";
        
        cin >> n;
    }
    
    return 0;
}