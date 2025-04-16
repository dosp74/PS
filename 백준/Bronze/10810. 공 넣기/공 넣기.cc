#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int arr[101] = { 0 }; // 1번 인덱스부터 사용
    int i, j, k;
    
    for (int t = 0; t < M; t++) {
        cin >> i >> j >> k;
        for (int idx = i; idx <= j; idx++)
            arr[idx] = k;
    }
    
    for (int i = 1; i <= N; i++)
        cout << arr[i] << " ";
    
    return 0;
}