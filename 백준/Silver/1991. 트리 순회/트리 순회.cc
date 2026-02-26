#include <bits/stdc++.h>
using namespace std;

char tree[26][2]; // [노드][0: 왼쪽, 1: 오른쪽]

void preorder(char node) {
    if (node == '.') {
        return;
    }
    
    cout << node;
    preorder(tree[node - 'A'][0]);
    preorder(tree[node - 'A'][1]);
}

void inorder(char node) {
    if (node == '.') {
        return;
    }
    
    inorder(tree[node - 'A'][0]);
    cout << node;
    inorder(tree[node - 'A'][1]);
}

void postorder(char node) {
    if (node == '.') {
        return;
    }
    
    postorder(tree[node - 'A'][0]);
    postorder(tree[node - 'A'][1]);
    cout << node;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        char parent;
        cin >> parent;
        
        for (int j = 0; j < 2; j++) {
            char child;
            cin >> child;
            tree[parent - 'A'][j] = child;
        }
    }
    
    preorder('A');
    cout << "\n";
    
    inorder('A');
    cout << "\n";
    
    postorder('A');
    cout << "\n";
    
    return 0;
}