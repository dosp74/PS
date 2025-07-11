#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    unordered_set<int> nums;
    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        nums.insert(input);
    }
    
    int M;
    cin >> M;
    
    for (int i = 0; i < M; i++) {
        int input;
        cin >> input;
        if (nums.find(input) != nums.end()) {
            cout << "1\n";
        }
        else {
            cout << "0\n";
        }
    }
    
    return 0;
}