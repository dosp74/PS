#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, K;
    cin >> N >> K;
    
    queue<int> josephus;
    for (int i = 1; i <= N; i++) {
        josephus.push(i);
    }
    
    cout << "<";
    
    while (josephus.size() != 1) {
        for (int i = 1; i < K; i++) {
            josephus.push(josephus.front());
            josephus.pop();
        }
        cout << josephus.front() << ", ";
        josephus.pop();
    }
    
    cout << josephus.front() << ">";
    
    return 0;
}