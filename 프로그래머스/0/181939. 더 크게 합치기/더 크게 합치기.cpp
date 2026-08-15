#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string first = to_string(a) + to_string(b);
    string second = to_string(b) + to_string(a);
    
    answer = stoi(first) >= stoi(second) ? stoi(first) : stoi(second);
    
    return answer;
}