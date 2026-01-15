#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        string p; // 수행할 함수
        cin >> p;
        
        int n; // 배열에 들어있는 수의 개수
        cin >> n;
        
        string arr; // 배열
        cin >> arr;
        
        int num = 0;
        bool inNum = false;
        
        deque<int> dq;
        for (char c : arr) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
                inNum = true;
            }
            else {
                if (inNum) {
                    dq.push_back(num);
                    num = 0;
                    inNum = false;
                }
            }
        }
        
        bool isFront = true;
        bool isComplete = true;
        
        for (int i = 0; i < p.length(); i++) {
            if (p[i] == 'R') {
                isFront = !isFront;
            }
            else if (p[i] == 'D') {
                if (dq.empty()) {
                    isComplete = false;
                    cout << "error\n";
                    
                    break;
                }
                
                if (isFront) {
                    dq.pop_front();
                }
                else {
                    dq.pop_back();
                }
            }
        }
        
        if (!isComplete) {
            continue;
        }
        
        cout << "[";
        
        int dqSize = dq.size();
        
        for (int i = 0; i < dqSize; i++) {
            if (i == dqSize - 1) {
                cout << dq.front();
                
                break;
            }
            
            if (isFront) {
                cout << dq.front() << ",";
                dq.pop_front();
            }
            else {
                cout << dq.back() << ",";
                dq.pop_back();
            }
        }
        
        cout << "]\n";
    }
    
    return 0;
}