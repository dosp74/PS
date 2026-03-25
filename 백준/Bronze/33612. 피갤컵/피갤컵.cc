#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int year = 2024;
    int month = 8 + (N - 1) * 7;
    
    year += (month - 1) / 12;
    month = (month - 1) % 12 + 1;
    
    cout << year << " " << month;
    
    return 0;
}