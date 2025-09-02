#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int C;
    cin >> C;
    
    while (C--) {
        int N;
        cin >> N;
        
        double sum = 0;
        
        vector<int> scores(N);
        for (int i = 0; i < N; i++) {
            cin >> scores[i];
            sum += scores[i];
        }
        
        sum /= N;
        
        int goodStudentNumber = 0;
        
        for (int i = 0; i < N; i++) {
            if ((double)scores[i] > sum) {
                goodStudentNumber++;
            }
        }
        
        double result = (double)goodStudentNumber / N * 100;
        
        cout << fixed << setprecision(3) << result << "%" << "\n";
    }
    
    return 0;
}