#include <iostream>
#include <list>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    if (N == 1)
        return 0;
    
    list<int> numberList;
    
    while (N != 1) {
        for (int i = 2; i <= N; i++) {
            if (N % i == 0) {
                numberList.push_back(i);
                N /= i;
                
                break;
            }
        }
    }
    
    for (auto it = numberList.begin(); it != numberList.end(); it++)
        cout << *it << "\n";
    
    return 0;
}