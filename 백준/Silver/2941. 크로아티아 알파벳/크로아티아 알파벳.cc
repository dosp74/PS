#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    int count = 0;
    
    for (int i = 0; i < str.size(); i++) {
        if (i < str.size() - 2 && str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=') {
            i++; i++;
            count++;
        }
        else if (i < str.size() - 1) {
            if (str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-')) {
                i++;
                count++;
            }
            else if (str[i] == 'd' && str[i + 1] == '-') {
                i++;
                count++;
            }
            else if (str[i] == 'l' && str[i + 1] == 'j') {
                i++;
                count++;
            }
            else if (str[i] == 'n' && str[i + 1] == 'j') {
                i++;
                count++;
            }
            else if (str[i] == 's' && str[i + 1] == '=') {
                i++;
                count++;
            }
            else if (str[i] == 'z' && str[i + 1] == '=') {
                i++;
                count++;
            }
            else
                count++;
        }
        else
            count++;
    }
    
    cout << count;
    
    return 0;
}