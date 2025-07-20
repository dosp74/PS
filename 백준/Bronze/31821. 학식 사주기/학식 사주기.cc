#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    
    vector<int> menus(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> menus[i];
    }
    
    int totalPrice = 0;
    
    cin >> M;
    for (int i = 1; i <= M; i++) {
        int menu;
        cin >> menu;
        totalPrice += menus[menu];
    }
    
    cout << totalPrice;
    
    return 0;
}