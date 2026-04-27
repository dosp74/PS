#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> inorder, postorder;
vector<int> pos;

void solve(int inStart, int inEnd, int postStart, int postEnd) {
    // 서브 트리가 비어있으면 종료
    if (inStart > inEnd || postStart > postEnd) {
        return;
    }
    
    // postorder의 마지막 원소는 항상 현재 서브 트리의 루트
    int root = postorder[postEnd];
    
    cout << root << " ";
    
    int rootIndex = pos[root];
    int leftSize = rootIndex - inStart;
    
    solve(inStart, rootIndex - 1, postStart, postStart + leftSize - 1);
    solve(rootIndex + 1, inEnd, postStart + leftSize, postEnd - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    
    inorder.resize(n);
    postorder.resize(n);
    pos.resize(n + 1);
    
    for (int i = 0; i < n; i++) {
        cin >> inorder[i];
        pos[inorder[i]] = i;
    }
    
    for (int i = 0; i < n; i++) {
        cin >> postorder[i];
    }
    
    solve(0, n - 1, 0, n - 1);
    
    return 0;
}