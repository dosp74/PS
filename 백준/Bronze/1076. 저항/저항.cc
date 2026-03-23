#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    map<string, pair<long long, long long>> colors;
    colors["black"] = {0, 1};
    colors["brown"] = {1, 10};
    colors["red"] = {2, 100};
    colors["orange"] = {3, 1000};
    colors["yellow"] = {4, 10000};
    colors["green"] = {5, 100000};
    colors["blue"] = {6, 1000000};
    colors["violet"] = {7, 10000000};
    colors["grey"] = {8, 100000000};
    colors["white"] = {9, 1000000000};
    
    string fi, si, ti;
    cin >> fi >> si >> ti;
    
    cout << (colors[fi].first * 10 + colors[si].first) * colors[ti].second;
    
    return 0;
}