#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;
    
    int case1 = A + B + C;
    int case2 = A + B + D;
    int case3 = A + C + D;
    int case4 = B + C + D;
    int result;
    
    if (E > F) {
        result = max(max(case1, case2), max(case3, case4)) + E;
    }
    else {
        result = max(max(case1, case2), max(case3, case4)) + F;
    }
    
    cout << result;
    
    return 0;
}