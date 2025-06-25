#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    getline(cin, S);
    
    if (S.size() >= 2 && S.front() == '\"' && S.back() == '\"') {
        if (S.size() == 2)
            cout << "CE";
        else {
            bool onlySpace = true;
            
            for (int i = 1; i < S.size() - 1; i++) {
                if (S[i] != ' ') {
                    onlySpace = false;
                    
                    break;
                }
            }
            
            if (onlySpace)
                cout << "CE";
            else {
                for (int i = 1; i < S.size() - 1; i++)
                    cout << S[i];
            }
        }
    }
    else
        cout << "CE";
    
    return 0;
}