#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    queue<int> router;
    
    int packet;
    cin >> packet;
    
    while (packet != -1) {
        if (packet == 0) {
            router.pop();
            cin >> packet;
            
            continue;
        }
        
        if (!router.empty() && router.size() == N) {
            cin >> packet;
            
            continue;
        }
        
        router.push(packet);
        cin >> packet;
    }
    
    if (router.empty()) {
        cout << "empty";
        
        return 0;
    }
    
    while (!router.empty()) {
        cout << router.front() << " ";
        router.pop();
    }
    
    return 0;
}