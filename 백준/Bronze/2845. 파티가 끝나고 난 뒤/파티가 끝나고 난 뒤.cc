#include <iostream>
using namespace std;

int main() {
    int L, P;
    cin >> L >> P;
    
    int news[5];
    for (int i = 0; i < 5; i++)
        cin >> news[i];
    
    for (int i = 0; i < 5; i++)
        cout << news[i] - L * P << " ";
    
    return 0;
}