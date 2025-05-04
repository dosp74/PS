#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
int partition (int data[], int left, int right) {
    int pivot = data[right]; // pivot
    int i = (left - 1);
    
    for (int j = left; j <= right - 1; j++) {
        if (data[j] <= pivot) {
            i++;
            swap(data[i], data[j]);
        }
    }
    
    swap(data[i + 1], data[right]);
    
    return (i + 1);
}

void quickSort(int data[], int left, int right) {
    if (left < right) {
        int pivot = partition(data, left, right);
        
        quickSort(data, left, pivot - 1);
        quickSort(data, pivot + 1, right);
    }
}
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> arr(N);
    
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < N; i++)
        cout << arr[i] << "\n";
    
    return 0;
}