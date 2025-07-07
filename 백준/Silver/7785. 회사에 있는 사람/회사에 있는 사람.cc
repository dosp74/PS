#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    set<string, greater<>> names;
    for (int i = 0; i < n; i++) {
        string name, action;
        cin >> name >> action;
        
        if (action == "enter")
            names.insert(name);
        else
            names.erase(name);
    }
    
    for (const auto& name : names)
        cout << name << "\n";
    
    return 0;
}