#include <iostream>
using namespace std;

int main() {
    int score[5];
    
    for (int i = 0; i < 5; i++)
        cin >> score[i];
    
    int average = 0;
    
    for (int i = 0; i < 5; i++) {
        if (score[i] < 40)
            average += 40;
        else
            average += score[i];
    }
    
    cout << average / 5;
    
    return 0;
}