#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    int min = arr[0], max = arr[0];
    
    for (int i = 0; i < N; i++) {
        if (max <= arr[i])
            max = arr[i];
        if (min >= arr[i])
            min = arr[i];
    }
    
    cout << min << " " << max;
    
    return 0;
}