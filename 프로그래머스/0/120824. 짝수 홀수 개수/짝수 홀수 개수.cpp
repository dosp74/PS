#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    int evenValue = 0;
    int oddValue = 0;
    
    for (int n : num_list) {
        if (n % 2 == 0) {
            evenValue++;
        }
        else {
            oddValue++;
        }
    }
    
    answer.push_back(evenValue);
    answer.push_back(oddValue);
    
    return answer;
}