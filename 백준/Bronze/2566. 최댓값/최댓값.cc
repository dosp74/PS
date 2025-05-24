#include <iostream>
using namespace std;

int main() {
    int arr[9][9];
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++)
            cin >> arr[i][j];
    }
    
    int maxValue = 0;
    int maxRow = 0;
    int maxColumn = 0;
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (maxValue < arr[i][j]) {
                maxValue = arr[i][j];
                maxRow = i;
                maxColumn = j;
            }
        }
    }
    
    cout << maxValue << "\n" << maxRow + 1 << " " << maxColumn + 1;
    
    return 0;
}