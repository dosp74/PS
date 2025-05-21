#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();
    
    string str;
    
    for (int i = 1; i <= N; i++) {
        getline(cin, str);
        cout << i << ". " << str << "\n";
    }
    
    return 0;
}