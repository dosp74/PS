#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int point = (1 << N) + 1; // 2^N + 1
    cout << point * point;
    
    return 0;
}