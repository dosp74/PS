#include <bits/stdc++.h>
using namespace std;

int gear[5][8]; // 0번 인덱스는 생략

void sync(int num, int dir) {
    if (dir == 1) {
        int temp = gear[num][7];
        
        for (int i = 6; i >= 0; i--) {
            gear[num][i + 1] = gear[num][i];
        }
        
        gear[num][0] = temp;
    }
    else if (dir == -1) {
        int temp = gear[num][0];
        
        for (int i = 0; i < 7; i++) {
            gear[num][i] = gear[num][i + 1];
        }
        
        gear[num][7] = temp;
    }
}

// num번 톱니바퀴를 dir 방향으로 회전
// dir == 1: 시계 방향(오른쪽 밀기), dir == -1: 반시계 방향(왼쪽 밀기)
void rotate(int num, int dir) {
    // 미리 복사
    int leftGear[5] = {0, gear[1][6], gear[2][6], gear[3][6], gear[4][6]};
    int rightGear[5] = {0, gear[1][2], gear[2][2], gear[3][2], gear[4][2]};
    
    // num번 톱니바퀴를 dir 방향으로 회전
    if (num == 1) {
        // 서로 달라야 둘 다 회전
        if (rightGear[1] != leftGear[2]) {
            sync(1, dir); sync(2, -dir);
            
            if (rightGear[2] != leftGear[3]) {
                sync(3, dir);
                
                if (rightGear[3] != leftGear[4]) {
                    sync(4, -dir);
                }
            }
        }
        else {
            sync(1, dir);
        }
    }
    else if (num == 2) {
        if (leftGear[2] != rightGear[1]) {
            sync(2, dir); sync(1, -dir);
            
            if (rightGear[2] != leftGear[3]) {
                sync(3, -dir);
                
                if (rightGear[3] != leftGear[4]) {
                    sync(4, dir);
                }
            }
        }
        else {
            sync(2, dir);
            
            if (rightGear[2] != leftGear[3]) {
                sync(3, -dir);
                
                if (rightGear[3] != leftGear[4]) {
                    sync(4, dir);
                }
            }
        }
    }
    else if (num == 3) {
        if (leftGear[3] != rightGear[2]) {
            sync(3, dir); sync(2, -dir);
            
            if (leftGear[2] != rightGear[1]) {
                sync(1, dir);
            }
            
            if (rightGear[3] != leftGear[4]) {
                sync(4, -dir);
            }
        }
        else {
            sync(3, dir);
            
            if (rightGear[3] != leftGear[4]) {
                sync(4, -dir);
            }
        }
    }
    else {
        if (leftGear[4] != rightGear[3]) {
            sync(4, dir); sync(3, -dir);
            
            if (leftGear[3] != rightGear[2]) {
                sync(2, dir);
                
                if (leftGear[2] != rightGear[1]) {
                    sync(1, -dir);
                }
            }
        }
        else {
            sync(4, dir);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (int i = 1; i <= 4; i++) {
        string input;
        cin >> input;
        
        for (int j = 0; j < 8; j++) {
            gear[i][j] = input[j] - '0';
        }
    }
    
    int K;
    cin >> K;
    
    while (K--) {
        int num, dir;
        cin >> num >> dir; // dir == 1: 시계 방향, dir == -1: 반시계 방향
        
        rotate(num, dir);
    }
    
    // 출력
    int answer = 0;
    
    for (int i = 1; i <= 4; i++) {
        int result = gear[i][0];
        
        // S극이면
        if (result == 1) {
            int plusValue = 1 << (i - 1);
            answer += plusValue;
        }
    }
    
    cout << answer;
    
    return 0;
}