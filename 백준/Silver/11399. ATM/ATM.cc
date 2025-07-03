#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> v;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end());
    
    int time = 0;
    int current = 0;
    
    for (int i = 0; i < N; i++) {
        current += v[i];
        time += current;
    }
    
    cout << time;
    
    return 0;
}