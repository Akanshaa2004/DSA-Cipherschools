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
void printlinkedlist(node *&head)
{
    if (head == NULL)
    {
        cout << "The linked list still empty " << endl;
        return;
    }
    node *temp;
    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << endl;
}

void Insertatstart(node *&head, int data)
{
    node *temp = new node(data);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    temp->next = head;
    head = temp;
}
void Insertatend(node *&head, int data)
{
    node *temp = new node(data);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    node *end;
    end = head;
    while (end->next != NULL)
    {
        end = end->next;
    }
    end->next = temp;
}
int main()
{
    node *head = NULL;
    Insertatend(head,5);
    Insertatend(head,7);
    Insertatend(head,8);
    Insertatstart(head, 3);
    Insertatstart(head, 2);
    Insertatend(head, 9);
    Insertatend(head, 10);
    printlinkedlist(head);
    return 0;
}
