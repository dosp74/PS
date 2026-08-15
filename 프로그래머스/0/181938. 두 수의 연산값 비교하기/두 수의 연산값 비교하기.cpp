#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string first = to_string(a) + to_string(b);
    int second = 2 * a * b;
    
    answer = stoi(first) >= second ? stoi(first) : second;
    
    return answer;
}