#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int count = 0;
    
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        
        bool alphabet[26] = { false };
        bool isGroup = true;
        char prev = 0;
        
        for (int j = 0; j < word.size(); j++) {
            char current = word[j];
            
            if (current != prev) {
                if (alphabet[current - 'a']) {
                    isGroup = false;
                    break;
                }
                
                alphabet[current - 'a'] = true;
            }
            
            prev = current;
        }
        
        if (isGroup)
            count++;
    }
    
    cout << count;
    
    return 0;
}