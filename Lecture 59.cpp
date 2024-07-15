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
void Insertatmiddleafterwhichelement(node *&head, int location, int data)
{
    node *temp = new node(data);
    node *var = head;
    while (var->data != location)
    {
        var = var->next;
        if (var == NULL)
        {
            cout << "The location doesnt exist, check the location again " << endl;
            return;
        }
    }
    temp->next = var->next;
    var->next = temp;
}

void deletenodeoflinkedlist(node *&head, int data)
{
    if (head->data == data)
    {
        cout << "The head of the linked list is going to be deleted!!" << endl;
        head = head->next;
        return;
    }
    node *temp;
    node *prev;
    temp = head;
    while (temp->data != data)
    {
        if(temp->data!=data)
        {
            cout<<"The element to be deleted doesnt exist"<<endl;
            return;

        }
        prev = temp;
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        prev->next = NULL;
        return;
    }
    prev->next = prev->next->next;
}
int main()
{
    node *head = NULL;
    Insertatend(head, 5);
    Insertatend(head, 7);
    Insertatend(head, 8);
    Insertatstart(head, 3);
    Insertatstart(head, 2);
    Insertatend(head, 9);
    Insertatend(head, 10);
    printlinkedlist(head);
    Insertatmiddleafterwhichelement(head, 3, 4);
    Insertatmiddleafterwhichelement(head, 5, 6);
    printlinkedlist(head);
    deletenodeoflinkedlist(head, 2);
    deletenodeoflinkedlist(head, 10);
    deletenodeoflinkedlist(head, 6);
    deletenodeoflinkedlist(head,100);
    printlinkedlist(head);
    return 0;
}
