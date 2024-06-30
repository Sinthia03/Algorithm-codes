#include <iostream>
using namespace std;

struct Tree {
    int data;
    Tree* left;
    Tree* right;

    Tree(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
private:
    Tree* root;

public:
    BST() {
        root = nullptr;
    }


    void insert(int value) {
        root = insertRecursive(root, value);
    }

    Tree* insertRecursive(Tree* root, int value) {
        if (root == nullptr) {
            root = new Tree(value);
            return root;
        }

        if (value < root->data) {
            root->left = insertRecursive(root->left, value);
        } else if (value > root->data) {
            root->right = insertRecursive(root->right, value);
        }

        return root;
    }


    void inorderTraversal() {
        inorderRecursive(root);
    }

    void inorderRecursive(Tree* root) {
        if (root != nullptr) {
            inorderRecursive(root->left);
            cout << root->data << " ";
            inorderRecursive(root->right);
        }
    }


    bool search(int value) {
        return searchRecursive(root, value);
    }

    bool searchRecursive(Tree* root, int value) {
        if (root == nullptr) {
            return false;
        }

        if (root->data == value) {
            return true;
        } else if (value < root->data) {
            return searchRecursive(root->left, value);
        } else {
            return searchRecursive(root->right, value);
        }
    }
};

int main() {
    BST x;
    x.insert(10);
    x.insert(20);
    x.insert(30);
    x.insert(40);
    x.insert(50);
    x.insert(60);


    cout << "Inorder traversal : ";
    x.inorderTraversal();
    cout << endl;

    int value = 100;
    if (x.search(value)) {
        cout << value << " is found in the tree." << endl;
    }
    else {
        cout << value << " is not found in the tree." << endl;
    }

    return 0;
}

