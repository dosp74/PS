#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    cout << A + B - C << "\n";
    
    string AB = to_string(A) + to_string(B);
    cout << stoi(AB) - C;
    
    return 0;
}