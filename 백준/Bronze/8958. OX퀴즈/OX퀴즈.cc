#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    string result;
    for (int i = 0; i < N; i++) {
        cin >> result;
        
        int score = 0;
        int count = 0;
        for (int j = 0; j < result.size(); j++) {
            if (result[j] == 'O') {
                count++;
                score += count;
            }
            else
                count = 0;
        }
        
        cout << score << "\n";
    }
    
    return 0;
}