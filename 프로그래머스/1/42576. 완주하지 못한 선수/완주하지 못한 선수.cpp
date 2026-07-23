#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> um;
    
    for (string s : participant) {
        um[s]++;
    }
    
    for (string s : completion) {
        um[s]--;
    }
    
    for (const auto& p : um) {
        if (p.second == 1) {
            return p.first;
        }
    }
}