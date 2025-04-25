#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	vector<string> arr(T);
	
	for (int i = 0; i < T; i++)
		cin >> arr[i];
	
	for (int i = 0; i < T; i++)
		cout << arr[i][0] << arr[i][arr[i].length() - 1] << "\n";
	
	return 0;
}