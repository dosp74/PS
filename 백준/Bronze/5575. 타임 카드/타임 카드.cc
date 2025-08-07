#include <iostream>
using namespace std;

void calcWorkTime() {
    int sh, sm, ss;
    int eh, em, es;
    
    cin >> sh >> sm >> ss >> eh >> em >> es;
    
    int startSec = sh * 3600 + sm * 60 + ss;
    int endSec = eh * 3600 + em * 60 + es;
    
    int workSec = endSec - startSec;
    
    int h = workSec / 3600; workSec %= 3600;
    int m = workSec / 60;
    int s = workSec % 60;
    
    cout << h << " " << m << " " << s << "\n";
}

int main() {
    for (int i = 0; i < 3; i++) {
        calcWorkTime();
    }
    
    return 0;
}