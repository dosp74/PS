#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    while (a != 0) {
        int leafNumber = 1;
        
        for (int i = 0; i < a; i++) {
            int splittingFactor, removedBranchNumber;
            cin >> splittingFactor >> removedBranchNumber;
            
            leafNumber *= splittingFactor;
            leafNumber -= removedBranchNumber;
        }
        
        cout << leafNumber << "\n";
        
        cin >> a;
    }
    
    return 0;
}