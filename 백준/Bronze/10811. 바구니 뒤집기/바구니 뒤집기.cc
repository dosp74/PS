#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	
	int arr[101] = { 0 };
	
	for (int i = 1; i <= N; i++)
		arr[i] = i;
	
	int i, j;
	
	for (int t = 1; t <= M; t++) {
		cin >> i >> j;
		
		for (int u = 0; u < (j - i + 1) / 2; u++)
			swap(arr[u + i], arr[j - u]);
	}
	
	for (int i = 1; i <= N; i++)
		cout << arr[i] << " ";
	
	return 0;
}