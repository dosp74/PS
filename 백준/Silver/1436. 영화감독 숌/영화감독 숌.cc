#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int title = 665;
    int count = 0;
    
    while (count != N) {
        title++;
        
        string temp = to_string(title);
        
        for (int i = 0; i < temp.size() - 2; i++) {
            if (temp[i] == '6' && temp[i + 1] == '6' && temp[i + 2] == '6') {
                count++;
                
                break;
            }
        }
    }
    
    cout << title;
    
    return 0;
}