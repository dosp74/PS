#include <iostream>
using namespace std;

int main() {
    int day;
    cin >> day;
    
    int car[5];
    for (int i = 0; i < 5; i++)
        cin >> car[i];
    
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (car[i] == day)
            count++;
    }
    
    cout << count;
    
    return 0;
}