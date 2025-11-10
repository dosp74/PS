#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string formula;
    cin >> formula;
    
    vector<int> plusNumber, minusNumber;
    bool isPlus = true;
    
    for (int i = 0; i < formula.length(); i++) {
        if (formula[i] == '+') {
            if (!isPlus) { // 현재 - ~일 때
                
            }
            else {
                isPlus = true;
            }
        }
        
        if (formula[i] == '-') {
            isPlus = false;
        }
        
        if (isPlus && isdigit(formula[i])) {
            int currentIndex = i;
            
            while (isdigit(formula[currentIndex + 1])) {
                currentIndex++;
            }
            
            plusNumber.push_back(stoi(formula.substr(i, currentIndex - i + 1)));
            
            i = currentIndex;
            
            continue;
        }
        
        if (!isPlus && isdigit(formula[i])) {
            int currentIndex = i;
            
            while (isdigit(formula[currentIndex + 1])) {
                currentIndex++;
            }
            
            minusNumber.push_back(stoi(formula.substr(i, currentIndex - i + 1)));
            
            i = currentIndex;
        }
    }
    
    int result = 0;
    
    for (int i : plusNumber) {
        result += i;
    }
    
    for (int i : minusNumber) {
        result -= i;
    }
    
    cout << result;
    
    return 0;
}