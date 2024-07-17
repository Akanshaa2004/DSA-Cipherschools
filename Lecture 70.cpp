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
void buildTree(Node * &root)
{
    int var;
    //cout << "Enter the value  ";
    cin >> var;
    if (var == -1)
        return;
    root = new Node(var);
//cout<<"Now enter the data which you want to be to the left of "<<var<<" ";
    buildTree(root->left);
//cout<<"Now enter the data which you want to be to the right of "<<var<<" ";
    buildTree(root->right);
}
void printPreordertransversal(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    printPreordertransversal(root->left);
    printPreordertransversal(root->right);
}
void printInordertransversal(Node *root)
{
    if(root==NULL)return ;

    printInordertransversal(root->left);
    cout<<root->data<<" ";
    printInordertransversal(root->right);
}
int main()
{
    Node *root=NULL;
    buildTree(root);
    cout<<"The elements transvsersed in preorder transversal is "<<endl;
    printPreordertransversal(root);

    cout<<"The elements transvsersed in Inorder transversal is "<<endl;
    printInordertransversal(root);

    cout<<"The elements transvsersed in postorder transversal is "<<endl;
    printPostordertransversal(root);

    return 0;
}
