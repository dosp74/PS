#include <iostream>
using namespace std;

int main() {
	int M, F;
	cin >> M >> F;
	
	while(M != 0 || F != 0) {
		cout << M + F << "\n";
		cin >> M >> F;
	}
	
	return 0;
}