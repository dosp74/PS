#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);
    
    while (sentence != "#") {
        int count = 0;
        
        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' || 
               sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U')
                count++;
        }
        
        cout << count << "\n";
        
        getline(cin, sentence);
    }
    
    return 0;
}