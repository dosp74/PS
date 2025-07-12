#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int S, M, L, XL, XXL, XXXL;
    cin >> S >> M >> L >> XL >> XXL >> XXXL;
    
    int T, P;
    cin >> T >> P;
    
    int countT = 0;
    
    if (S % T != 0) {
        countT += (S / T) + 1;
    }
    else {
        countT += S / T;
    }
    
    if (M % T != 0) {
        countT += (M / T) + 1;
    }
    else {
        countT += M / T;
    }
    
    if (L % T != 0) {
        countT += (L / T) + 1;
    }
    else {
        countT += L / T;
    }
    
    if (XL % T != 0) {
        countT += (XL / T) + 1;
    }
    else {
        countT += XL / T;
    }
    
    if (XXL % T != 0) {
        countT += (XXL / T) + 1;
    }
    else {
        countT += XXL / T;
    }
    
    if (XXXL % T != 0) {
        countT += (XXXL / T) + 1;
    }
    else {
        countT += XXXL / T;
    }
    
    cout << countT << "\n" << N / P << " " << N % P;
    
    return 0;
}