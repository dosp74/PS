#include <iostream>
using namespace std;

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int input[8];
    
    for (int i = 0; i < 8; i++)
        cin >> input[i];
    
    if (input[0] == 1) {
        for (int i = 1; i < 8; i++) {
            if (input[i] != arr[i]) {
                cout << "mixed";
                
                return 0;
            }
        }
        
        cout << "ascending";
    }
    else if (input[0] == 8) {
        int temp = 1;
        
        for (int i = 6; i >= 0; i--) {
            if (input[temp++] != arr[i]) {
                cout << "mixed";
                
                return 0;
            }
        }
        
        cout << "descending";
    }
    else
        cout << "mixed";
    
    return 0;
}