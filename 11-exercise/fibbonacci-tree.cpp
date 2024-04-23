#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};

Node* newNode(int n){
    Node* node = new Node();
    node->val = n;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

int findFibbonacci(int n) {
    if (n <= 2) {
        return 1;
    }
    return findFibbonacci(n - 1) + findFibbonacci(n - 2);
}

Node* buildFibTree(int n) {
    if (n <= 1) {
        return newNode(1);
    } else {
        Node* current = newNode(n);
        current->left = buildFibTree(n - 1);
        current->right = buildFibTree(n - 2);
        return current;
    }
}

void printPreorder(struct Node* node)
{
    if (node == nullptr)
        return;
    cout << findFibbonacci(node->val + 1) << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}

int size(Node* node){
    if(node == nullptr){
        return 0;
    }
    else{
        return size(node->left) + 1 + size(node->right);
    }
}

int depth(Node* node) {
    if (node == nullptr) {
        return 0;
    }
    int leftDepth = depth(node->left);
    int rightDepth = depth(node->right);
    return max(leftDepth, rightDepth) + 1;
}

int leafs(Node* node){

    if(node == nullptr){
        return 0;
    }
    else if(node->left == nullptr && node->right == nullptr){
        return 1;
    }
    int leftLeafs = leafs(node->left);
    int rightLeafs = leafs(node->right);
    return leftLeafs + rightLeafs;
}


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    Node* tree = buildFibTree(n);
    cout << "Call tree in pre-order: ";
    printPreorder(tree);
    cout << endl << "Call tree size: " << size(tree) << endl;
    cout << "Call tree depth: " << depth(tree) << endl;
    cout << "Call tree leafs: " << leafs(tree) << endl;
    return 0;
}
