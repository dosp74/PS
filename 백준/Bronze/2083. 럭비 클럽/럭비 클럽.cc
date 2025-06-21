#include <iostream>
using namespace std;

int main() {
    string name;
    int age, weight;
    
    while(cin >> name >> age >> weight) {
        if (name == "#" && age == 0 && weight == 0)
            return 0;
        
        if (age > 17 || weight >= 80)
            cout << name << " Senior\n";
        else
            cout << name << " Junior\n";
    }
    
    return 0;
}