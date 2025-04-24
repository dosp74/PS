#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	double score[N];
	double M = 0.0;
	
	for (int i = 0; i < N; i++) {
		cin >> score[i];
		
		if (score[i] > M)
			M = score[i];
	}
	
	for (int i = 0; i < N; i++)
		score[i] = (score[i] / M) * 100.0;
	
	double avg = 0.0;
	
	for (int i = 0; i < N; i++)
		avg += score[i];
	
	cout << avg / N;
	
	return 0;
}