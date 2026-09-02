#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    map<int, int> m;
    
    for (int v : array) {
        m[v]++;
    }
    
    answer = m.begin()->first;
    bool isMulti = false;
    
    if (m.size() == 1) {
        return answer;
    }
    
    for (auto p = ++m.begin(); p != m.end(); p++) {
        if (m[answer] < p->second) {
            answer = p->first;
            isMulti = false;
        }
        else if (m[answer] == p->second) {
            isMulti = true;
        }
    }
    
    if (isMulti) {
        return -1;
    }
    
    return answer;
}