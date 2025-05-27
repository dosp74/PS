#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string subject[20], grade[20];
    double score[20];
    
    for (int i = 0; i < 20; i++)
        cin >> subject[i] >> score[i] >> grade[i];
    
    double result = 0;
    double totalScore = 0;
    
    for (int i = 0; i < 20; i++) {
        double majorScore;
        
        if (grade[i] == "P")
            continue;
        
        if (grade[i] == "A+")
            majorScore = 4.5;
        else if (grade[i] == "A0")
            majorScore = 4.0;
        else if (grade[i] == "B+")
            majorScore = 3.5;
        else if (grade[i] == "B0")
            majorScore = 3.0;
        else if (grade[i] == "C+")
            majorScore = 2.5;
        else if (grade[i] == "C0")
            majorScore = 2.0;
        else if (grade[i] == "D+")
            majorScore = 1.5;
        else if (grade[i] == "D0")
            majorScore = 1.0;
        else
            majorScore = 0.0;
        
        result += score[i] * majorScore;
        totalScore += score[i];
    }
    
    cout << fixed << setprecision(6) << result / totalScore;
    
    return 0;
}