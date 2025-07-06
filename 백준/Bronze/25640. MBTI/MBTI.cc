#include <iostream>
#include <vector>
using namespace std;

int main() {
    string MBTI;
    int N;
    cin >> MBTI >> N;
    
    vector<string> v;
    for (int i = 0; i < N; i++) {
        string temp;
        cin >> temp;
        v.push_back(temp);
    }
    
    int count = 0;
    
    for (const auto& m : v) {
        if (m == MBTI)
            count++;
    }
    
    cout << count;
    
    return 0;
}