#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    map<string, int> bestSeller;
    for (int i = 0; i < N; i++) {
        string bookName;
        cin >> bookName;
        bestSeller[bookName]++;
    }
    
    vector<pair<string, int>> v(bestSeller.begin(), bestSeller.end());
    
    sort(v.begin(), v.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second > b.second;
    });
    
    cout << v[0].first;
    
    return 0;
}