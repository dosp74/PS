#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, string>> v;
    for (int i = 0; i < N; i++) {
        int age;
        string name;
        cin >> age >> name;
        v.push_back({age, name});
    }
    
    stable_sort(v.begin(), v.end(), [](pair<int, string> a, pair<int, string> b) {
        return a.first < b.first;
    });
    
    for (auto p : v)
        cout << p.first << " " << p.second << "\n";
    
    return 0;
}