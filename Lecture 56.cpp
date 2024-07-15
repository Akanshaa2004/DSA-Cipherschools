#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data_input)
    {
        this->data = data_input;
        this->next = NULL;
    }
};
// Helper function
void printnode(node *&node)
{
    cout << "value" << node->data;
    cout << "Address " << node->next;
}
void printlinkedlist(node * & head)
{
    if (head == NULL)
    {
        cout << "The linked list still empty " << endl;
        return;
    }
   node*temp;
   temp=head;
   while(temp!=NULL)
   {
    cout<<temp->data<<"-->";
    temp=temp->next;
   }
}
int main()
{
    node *head=NULL;
    printlinkedlist(head);
    node *node1 = new node(5);
    head = node1;
    printlinkedlist(head);
    cout<<endl;

    node *node2 = new node(7);
    node1->next = node2;
    printlinkedlist(head);
    cout<<endl;

    node *node3 = new node(8);
    node2->next = node3;
    printlinkedlist(head);
    cout<<endl;

    // printnode(node1);
    // printnode(node2);
    // printnode(node3);

   // printnode(node1);
    // cout<<endl<<node2<<endl;
    // printnode(node2);
    //  cout<<endl<<node3<<endl;
    // printnode(node3);

   // printnode(node1->next);
    //printnode(node1->next->next);

    return 0;
}
