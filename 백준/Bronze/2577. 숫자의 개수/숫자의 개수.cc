#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    int arr[10] = {0};
    
    string result = to_string(A * B * C);
    for (int i = 0; i < result.size(); i++) {
        char c = result[i];
        arr[c - '0']++;
    }
    
    for (int i = 0; i < 10; i++)
        cout << arr[i] << "\n";
    
    return 0;
}