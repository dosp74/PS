#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int data[], int n) { // O(n^2)
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        
        for (int j = i + 1; j < n; j++) {
            if (data[j] < data[minIndex])
                minIndex = j;
        }
        
        swap(data[i], data[minIndex]);
    }
}

int main() {
    int N;
    cin >> N;
    
    int arr[1000];
    
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    selectionSort(arr, N);
    
    for (int i = 0; i < N; i++)
        cout << arr[i] << "\n";
    
    return 0;
}