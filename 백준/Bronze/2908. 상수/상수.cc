#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string A, B;
	cin >> A >> B;
	
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());
	
	int solA = stoi(A);
	int solB = stoi(B);
	
	cout << max(solA, solB);
	
	return 0;
}