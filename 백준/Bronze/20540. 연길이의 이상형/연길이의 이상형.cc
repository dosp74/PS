#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string mbti;
    cin >> mbti;
    
    for (char& c : mbti) {
        if (c == 'E') {
            c = 'I';
        }
        else if (c == 'I') {
            c = 'E';
        }
        else if (c == 'S') {
            c = 'N';
        }
        else if (c == 'N') {
            c = 'S';
        }
        else if (c == 'T') {
            c = 'F';
        }
        else if (c == 'F') {
            c = 'T';
        }
        else if (c == 'J') {
            c = 'P';
        }
        else if (c == 'P') {
            c = 'J';
        }
    }
    
    cout << mbti;
    
    return 0;
}