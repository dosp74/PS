#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

bool compare(const string& a, const string& b) {
    if (a.length() == b.length())
        return a < b; // 사전 순
    return a.length() < b.length();
}

int main() {
    int N;
    cin >> N;
    
    set<string> words;
    for (int i = 0; i < N; i++) {
        string temp;
        cin >> temp;
        words.insert(temp);
    }
    
    vector<string> v(words.begin(), words.end()); // set을 vector로 복사
    
    sort(v.begin(), v.end(), compare);
    
    for (auto word : v)
        cout << word << "\n";
    
    return 0;
}