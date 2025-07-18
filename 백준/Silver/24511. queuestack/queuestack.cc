#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N;
    
    vector<pair<int, int>> queuestack;
    vector<int> A, B, C;
    
    for (int i = 0; i < N; i++) {
        int number;
        cin >> number;
        A.push_back(number); // 0이면 큐, 1이면 스택
    }
    
    for (int i = 0; i < N; i++) {
        int number;
        cin >> number;
        B.push_back(number); // 들어 있는 원소
    }
    
    for (int i = 0; i < N; i++) {
        queuestack.push_back({A[i], B[i]});
    }
    
    cin >> M;
    
    for (int i = 0; i < M; i++) {
        int number;
        cin >> number;
        C.push_back(number); // 삽입할 원소
    }
    
    deque<int> dq;
    
    for (int i = 0; i < N; i++) {
        if (queuestack[i].first == 0) {
            dq.push_back(queuestack[i].second);
        }
    }
    
    for (int i = 0; i < M; i++) {
        dq.push_front(C[i]);
        cout << dq.back() << " ";
        dq.pop_back();
    }
    
    return 0;
}