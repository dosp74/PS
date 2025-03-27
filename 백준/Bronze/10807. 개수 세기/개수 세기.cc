#include <iostream>
using namespace std;

int main() {
    int count;
    cin >> count;
    
    int* arr = new int[count];
    
    for (int i = 0; i < count; i++) {
        cin >> arr[i];
    }
    
    int searchInteger, result = 0;
    cin >> searchInteger;
    
    for (int i = 0; i < count; i++) {
        if (arr[i] == searchInteger)
            result++;
    }
    
    cout << result;
    
    delete[] arr;
    
    return 0;
}