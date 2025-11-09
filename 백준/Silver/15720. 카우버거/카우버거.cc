#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int B, C, D, sum = 0; // B = 버거, C = 사이드 메뉴, D = 음료
    cin >> B >> C >> D;
    
    vector<int> burger(B), sideMenu(C), beverage(D);
    
    for (int i = 0; i < B; i++) {
        cin >> burger[i];
        sum += burger[i];
    }
    
    sort(burger.begin(), burger.end(), greater<int>());
    
    for (int i = 0; i < C; i++) {
        cin >> sideMenu[i];
        sum += sideMenu[i];
    }
    
    sort(sideMenu.begin(), sideMenu.end(), greater<int>());
    
    for (int i = 0; i < D; i++) {
        cin >> beverage[i];
        sum += beverage[i];
    }
    
    sort(beverage.begin(), beverage.end(), greater<int>());
    
    int minSize = min(B, min(C, D));
    int setSum = 0;
    
    for (int i = 0; i < minSize; i++) {
        setSum += (burger[i] + sideMenu[i] + beverage[i]) * 0.9;
    }
    
    for (int i = minSize; i < burger.size(); i++) {
        setSum += burger[i];
    }
    
    for (int i = minSize; i < sideMenu.size(); i++) {
        setSum += sideMenu[i];
    }
    
    for (int i = minSize; i < beverage.size(); i++) {
        setSum += beverage[i];
    }
    
    cout << sum << "\n" << setSum;
    
    return 0;
}