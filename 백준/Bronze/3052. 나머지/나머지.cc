#include <iostream>
using namespace std;

int main() {
	int num;
	bool remainder[42] = { false };
	
	for (int i = 0; i < 10; i++) {
		cin >> num;
		remainder[num % 42] = true;
	}
	
	int count = 0;
	
	for (int i = 0; i < 42; i++) {
		if (remainder[i])
			count++;
	}
	
	cout << count << "\n";
	
	return 0;
}