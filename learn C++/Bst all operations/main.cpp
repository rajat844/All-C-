#include <bits/stdc++.h>
#include "node.h"

using namespace std;

Node* insertNode(Node* root, int val) {
    if (root == nullptr) {
        root = new Node(val);
        return root;
    }
    else if (root->data >= val)
        root->left = insertNode(root->left, val);
    else
        root->right = insertNode(root->right, val);
    return root;
}

Node* searchNode(Node* root, int val) {
    if (root == nullptr || root->data == val)
        return root;
    else if (root->data < val)
        return searchNode(root->right, val);
    else
        return searchNode(root->left, val);
}

Node* deleteNode(Node* root, int val) {
    if (root == nullptr)
        return root;
    if (root->data > val)
        root->left = deleteNode(root->left, val);
    else if (root->data < val)
        root->right = deleteNode(root->right, val);
    else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            free(root);
            root = temp;
        }

        else if (root->right == nullptr) {
            Node* temp = root->left;
            root = temp;
            free(temp);
        }
        else {
            Node* temp = root->left;
            while (temp->right->right != nullptr) {
                temp = temp->right;
            }
            root->data = temp->right->data;
            Node* temp2 = temp->right->left;
            free(temp->right);
            temp->right = temp2;
        }
    }
    return root;
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}





int main() {
    Node* tree;
    tree = new Node(10);
    tree->left = new Node(5);
    tree->left->left = new Node(2);
    tree->left->right = new Node(8);
    tree->left->left->left = new Node(1);
    tree->left->left->right = new Node(4);
    tree->left->right->left = new Node(7);
    tree->right = new Node(17);
    tree->right->left = new Node(16);
    tree->right->right = new Node(18);

    inorder(tree);

    Node* root = insertNode(tree, 9);
    inorder(root);

    root = deleteNode(root, 5);
    inorder(root);

    



    return 0;
}