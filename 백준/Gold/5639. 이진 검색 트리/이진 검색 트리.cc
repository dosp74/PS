#include <bits/stdc++.h>
using namespace std;

vector<int> preorder;

void postorder(int start, int end) {
    if (start > end) {
        return;
    }
    
    int root = preorder[start];
    int rightStart = start + 1;
    
    // 루트보다 커지는 처음 위치가 곧 오른쪽 서브트리의 시작
    while (rightStart <= end && preorder[rightStart] < root) {
        rightStart++;
    }
    
    postorder(start + 1, rightStart - 1);
    postorder(rightStart, end);
    cout << root << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x;
    
    while (cin >> x) {
        preorder.push_back(x);
    }
    
    postorder(0, preorder.size() - 1);
    
    return 0;
}