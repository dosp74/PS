#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    int L;
    cin >> L;
    
    string commands;
    cin >> commands;
    
    set<pair<int, int>> footprints;
    int x = 0, y = 0;
    footprints.insert({x, y});
    
    for (int i = 0; i < L; i++) {
        if (commands[i] == 'E') { // 동
            x++;
        } else if (commands[i] == 'W') { // 서
            x--;
        } else if (commands[i] == 'S') { // 남
            y--;
        } else { // 북
            y++;
        }
        footprints.insert({x, y});
    }
    
    cout << footprints.size();
    
    return 0;
}