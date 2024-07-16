#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void buildTree(Node *root)
{
    int var;
    cout << "Enter the value  ";
    cin >> var;
    if (var == -1)
        return;
    root = new Node(var);
    cout<<"Now enter the data which you want to be to the left of "<<var<<" ";
    buildTree(root->left);
    cout<<"Now enter the data which you want to be to the right of "<<var<<" ";
    buildTree(root->right);
}

int main()
{
    Node *root;
    buildTree(root);
    return 0;
}
