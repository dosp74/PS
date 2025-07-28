#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int M, N;
    cin >> M >> N;
    
    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false; // 0과 1은 소수가 아니다.
    
    // [에라토스테네스의 체]
    // 2부터 N까지의 모든 정수 중에서,
    // 2는 소수, 2의 배수를 모두 지운다.
    // 남아있는 수 중에서 가장 작은 수는 3, 소수이므로 3의 배수를 모두 지운다.
    // 이 과정을 루트 N까지 반복하면, 남아 있는 수는 모두 소수이다.
    // 시간 복잡도: O(NloglogN)
    
    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    for (int i = M; i <= N; i++) {
        if (isPrime[i]) {
            cout << i << "\n";
        }
    }
    
    return 0;
}