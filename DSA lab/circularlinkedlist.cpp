#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;
struct node *ptr = NULL, *p = NULL;
void insert_at_beg(int);
void insert_at_end(int);
void insert_at_pos(int);
void delete_first();
void delete_last();
void display();

int main()
{
    int ch, x;
    cout << "-----------Circular Linked List -----------" << endl;
    cout << "\nList for operation: \n";
    cout << " 1.Insert at beginning \n 2.Insert at end \n 3.Insert at position \n 4.Delete first \n 5.Delete last \n 6.Display \n";
    while (ch != 0)
    {
        cout << "\nEnter your choice-";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nEnter the value=";
            cin >> x;
            insert_at_beg(x);
            display();
            break;
        case 2:
            cout << "\nEnter the value=";
            cin >> x;
            insert_at_end(x);
            display();
            break;
        case 3:
            cout << "\nEnter the value=";
            cin >> x;
            insert_at_pos(x);
            display();
            break;
        case 4:
            cout << "\nBefore deletion of first element:";
            display();
            cout << "\nAfter deletion:";
            delete_first();
            display();
            break;
        case 5:
            cout << "\nBefore deletion of last element:";
            display();
            cout << "\nAfter deletion:";
            delete_last();
            display();
            break;
        case 6:
            cout << "\nElements in Circular Linked List: " << endl;
            display();
            break;
        default:
            cout << "\nEnter the correct choice..!";
            break;
        }
    }
    return 0;
}
void insert_at_beg(int x)
{
    struct node *newnode;
    newnode = new node;
    newnode->data = x;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->next = head;
        head = newnode;
    }
}
void insert_at_end(int x)
{
    struct node *newnode;
    newnode = new node;
    newnode->data = x;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = tail = newnode;
        newnode->next = newnode;
    }
    else
    {

        tail->next = newnode;
        tail = newnode;
        newnode->next = head;
    }
}
void insert_at_pos(int x)
{
    int pos, count = 0;
    cout << endl
         << "Enter the position where you want to insert: ";
    cin >> pos;
    struct node *newnode;
    newnode = new node;
    newnode->data = x;
    newnode->next = NULL;
    struct node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (pos == 1)
    {
        newnode->next = head;
        head = newnode;
        tail->next = newnode;
    }
    else if (pos > 1 && pos < count)
    {
        p = head;
        for (int i = 1; i < pos; i++)
        {
            ptr = p;
            p = p->next;
        }
        ptr->next = newnode;
        newnode->next = p;
    }
    else
        cout << "Invalid position!" << endl;
}
void delete_first()
{
    struct node *temp = head;
    if (head == NULL)
    {
        cout << "The list is empty!" << endl;
    }
    else
    {
        head = head->next;
        tail->next = head;
        delete temp;
    }
}
void delete_last()
{
    struct node *temp = tail;
    if (head == NULL)
    {
        cout << "The list is empty!" << endl;
    }
    else
    {
        p = head;
        while (p->next != tail)
        {
            p = p->next;
        }
        tail=p;
        p->next = head;
        delete temp;
    }
}
void display()
{
    if (head == NULL)
        cout << "The list is empty!" << endl;
    else
    {
        struct node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
}