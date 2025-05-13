#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    int result = 0;
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'C')
            result += 3;
        else if (str[i] >= 'D' && str[i] <= 'F')
            result += 4;
        else if (str[i] >= 'G' && str[i] <= 'I')
            result += 5;
        else if (str[i] >= 'J' && str[i] <= 'L')
            result += 6;
        else if (str[i] >= 'M' && str[i] <= 'O')
            result += 7;
        else if (str[i] >= 'P' && str[i] <= 'S')
            result += 8;
        else if (str[i] >= 'T' && str[i] <= 'V')
            result += 9;
        else if (str[i] >= 'W' && str[i] <= 'Z')
            result += 10;
    }
    
    cout << result;
    
    return 0;
}