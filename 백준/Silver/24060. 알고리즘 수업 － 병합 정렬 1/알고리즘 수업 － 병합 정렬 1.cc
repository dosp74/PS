#include <iostream>
#include <vector>
using namespace std;

int N, K;
vector<int> A;
long long count = 0;
int result = -1;

void merge(vector<int>& A, int p, int q, int r) {
    int i = p, j = q + 1, t = 0;
    vector<int> tmp(r - p + 1);
    
    while (i <= q && j <= r) {
        if (A[i] <= A[j]) {
            tmp[t++] = A[i++];
        }
        else {
            tmp[t++] = A[j++];
        }
    }
    
    while (i <= q) {
        tmp[t++] = A[i++];
    }
    
    while (j <= r) {
        tmp[t++] = A[j++];
    }
    
    i = p;
    t = 0;
    
    while (i <= r) {
        A[i] = tmp[t++];
        count++;
        
        if (count == K) {
            result = A[i];
            
            return;
        }
        
        i++;
    }
}

void merge_sort(vector<int>& A, int p, int r) {
    if (p < r && result == -1) {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N >> K;
    
    A.resize(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    merge_sort(A, 0, N - 1);
    
    cout << result;
    
    return 0;
}