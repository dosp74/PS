#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    int count = 1; // ChongChong
    
    unordered_set<string> us;
    us.insert("ChongChong");
    
    bool ChongChong = false;
    
    for (int i = 0; i < N; i++) {
        string A, B;
        cin >> A >> B;
        
        // 초기 설정
        if (A == "ChongChong" && !ChongChong) {
            us.insert(B);
            ChongChong = true;
            
            count++;
            
            continue;
        }
        else if (B == "ChongChong" && !ChongChong) {
            us.insert(A);
            ChongChong = true;
            
            count++;
            
            continue;
        }
        
        if (us.find(A) != us.end() && ChongChong) {
            if (us.find(B) == us.end()) {
                us.insert(B);
                count++;
            }
        }
        else if (us.find(B) != us.end() && ChongChong) {
            if (us.find(A) == us.end()) {
                us.insert(A);
                count++;
            }
        }
    }
    
    cout << count;
    
    return 0;
}