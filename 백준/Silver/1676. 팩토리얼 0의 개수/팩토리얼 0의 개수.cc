#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int count = 0;
    
    // N!의 끝에 0이 생기려면 10이 곱해져야 한다.
    // 10은 2 x 5로 표현되고, 2보다 5가 더 덜 등장하므로 5의 개수를 센다.
    
    for (int i = 5; N / i >= 1; i *= 5) {
        count += N / i;
    }
    
    cout << count;
    
    return 0;
}