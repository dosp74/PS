#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int middleValue = array.size() / 2;
    
    sort(array.begin(), array.end());
    answer = array[middleValue];
    
    return answer;
}