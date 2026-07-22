#include <bits/stdc++.h>
using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string result = my_string;
    
    for (int i = s; i < overwrite_string.length() + s; i++) {
        result[i] = overwrite_string[i - s];
    }
    
    return result;
}