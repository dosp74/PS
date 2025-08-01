#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    unordered_set<string> chatting;
    
    int count = 0;
    
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        string chat;
        cin >> chat;
        
        if (chat == "ENTER") {
            chatting.clear();
            
            continue;
        }
        
        if (chatting.find(chat) == chatting.end()) {
            chatting.insert(chat);
            count++;
        }
    }
    
    cout << count;
    
    return 0;
}