#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int nA, nB;
    cin >> nA >> nB;
    
    set<int> A, B;
    
    for (int i = 0; i < nA; i++) {
        int num;
        cin >> num;
        A.insert(num);
    }
    
    for (int i = 0; i < nB; i++) {
        int num;
        cin >> num;
        B.insert(num);
    }
    
    int count = 0;
    vector<int> tempStore;
    
    for (const auto& num : A) {
        if (B.find(num) == B.end()) {
            count++;
            tempStore.push_back(num);
        }
    }
    
    if (count == 0) {
        cout << 0;
        
        return 0;
    }
    
    cout << count << "\n";
    
    for (const auto& num : tempStore) {
        cout << num << " ";
    }
    
    return 0;
}