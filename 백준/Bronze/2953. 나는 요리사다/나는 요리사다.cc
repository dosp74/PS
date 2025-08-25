#include <iostream>
using namespace std;

int main() {
    int one, two, three, four;
    int maxNumber = 0;
    int maxScore = 0;
    
    for (int i = 1; i <= 5; i++) {
        cin >> one >> two >> three >> four;
        
        if (maxScore <= one + two + three + four) {
            maxNumber = i;
            maxScore = one + two + three + four;
        }
    }
    
    cout << maxNumber << " " << maxScore;
    
    return 0;
}