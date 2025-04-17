#include <iostream>
#include <vector>
using namespace std;

void swap(int& a, int& b) {
	int temp;
    
	temp = a;
	a = b;
	b = temp;
}

int main() {
	int N, M;
	cin >> N >> M;
	
	vector<int> arr(N + 1, 0);
	
	for (int i = 1; i <= N; i++)
		arr[i] = i;
	
	for (int t = 0; t < M; t++) {
		int i, j;
		cin >> i >> j;
        
		swap(arr[i], arr[j]);
	}
	
	for (int i = 1; i <= N; i++)
		cout << arr[i] << " ";
	
	return 0;
}