#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    int count = 0;
    
    for (int i = 0; i < N; i++) {
        if (arr[i] == 1) {
            count++;
            
            continue;
        }
        
        for (int j = 2; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                count++;
                
                break;
            }
        }
    }
    
    cout << N - count;
    
    return 0;
}