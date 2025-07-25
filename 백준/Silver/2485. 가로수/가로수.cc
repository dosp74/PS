#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    
    vector<int> distances;
    for (int i = 1; i < N; i++) {
        distances.push_back(v[i] - v[i - 1]);
    }
    
    int g = distances[0];
    for (int i = 1; i < distances.size(); i++) {
        g = gcd(g, distances[i]);
    }
    
    int result = 0;
    for (int i = 0; i < distances.size(); i++) {
        result += (distances[i] / g) - 1;
    }
    
    cout << result;
    
    return 0;
}