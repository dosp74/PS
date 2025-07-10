#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    unordered_set<int> setA, setB;
    
    for (int i = 0; i < A; i++) {
        int temp;
        cin >> temp;
        setA.insert(temp);
    }
    
    for (int i = 0; i < B; i++) {
        int temp;
        cin >> temp;
        setB.insert(temp);
    }
    
    int sizeA = setA.size();
    
    for (const auto& i : setA) {
        if (setB.find(i) != setB.end()) {
            sizeA--;
        }
    }
    
    int sizeB = setB.size();
    
    for (const auto& i : setB) {
        if (setA.find(i) != setA.end()) {
            sizeB--;
        }
    }
    
    cout << sizeA + sizeB;
    
    return 0;
}