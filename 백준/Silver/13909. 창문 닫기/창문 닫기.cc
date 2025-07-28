#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long N;
    cin >> N;
    
    // 어떤 창문 번호 k에 대해 그 창문은 k의 약수마다 상태가 바뀐다.
    // 어떤 수의 약수의 개수가 홀수인 경우는 그 수가 제곱수일 때이다.
    // N 이하의 제곱수의 개수
    cout << (long long)sqrt(N);
    
    return 0;
}