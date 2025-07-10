#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[10];
    map<int, int> m;
    
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        
        arr[i] = num;
        m[num]++;
    }
    
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }
    
    cout << sum / 10 << "\n";
    
    int mode = 0;
    int maxFreq = 0;
    for (const auto& p : m) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
            mode = p.first;
        }
    }
    
    cout << mode;
    
    return 0;
}