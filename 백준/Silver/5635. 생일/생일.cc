#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int day, month, year;
};

bool isYounger(const Student& a, const Student& b) {
    if (a.year != b.year) {
        return a.year > b.year;
    }
    
    if (a.month != b.month) {
        return a.month > b.month;
    }
    
    return a.day > b.day;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    Student s;
    cin >> s.name >> s.day >> s.month >> s.year;
    
    Student youngest = s;
    Student oldest = s;
    
    for (int i = 1; i < n; i++) {
        cin >> s.name >> s.day >> s.month >> s.year;
        
        if (isYounger(s, youngest)) {
            youngest = s;
        }
        
        if (isYounger(oldest, s)) {
            oldest = s;
        }
    }
    
    cout << youngest.name << "\n" << oldest.name;
    
    return 0;
}