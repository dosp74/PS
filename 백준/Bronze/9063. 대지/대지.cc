#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> x(N);
    vector<int> y(N);
    
    for (int i = 0; i < N; i++)
        cin >> x[i] >> y[i];
    
    if (N == 1) {
        cout << 0;
        
        return 0;
    }
    
    int minX, maxX, minY, maxY;
    
    minX = maxX = x[0];
    minY = maxY = y[0];
    
    for (int i = 0; i < N; i++) {
        if (x[i] < minX)
            minX = x[i];
        
        if (x[i] > maxX)
            maxX = x[i];
        
        if (y[i] < minY)
            minY = y[i];
        
        if (y[i] > maxY)
            maxY = y[i];
    }
    
    cout << (maxX - minX) * (maxY - minY);
    
    return 0;
}