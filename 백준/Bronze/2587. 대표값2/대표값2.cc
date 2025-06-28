#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr(5);
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    
    cout << (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5 << "\n";
    
    sort(arr.begin(), arr.end());
    
    cout << arr[2];
    
    return 0;
}