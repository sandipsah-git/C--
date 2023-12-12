#include <iostream>
using namespace std;
class singly
{
    int flag = true;
    int pos, i, value, count = 0;
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *tmp = NULL, *tmp1 = NULL;
    struct node *start = NULL, *p = NULL;
    struct node *ptr = NULL, *ptr1 = NULL;
    struct node *ptr2 = NULL, *ptr3 = NULL;

public:
    // function to insert element at beginning
    int insert_at_beg(int x)
    {
        tmp = new node;
        tmp->data = x;
        tmp->next = NULL;
        if (start == NULL)
        {
            start = tmp;
            start->next = NULL;
        }
        else
        {
            tmp->next = start;
            start = tmp;
        }
    }

    // function to insert element at the end
    int insert_at_end(int x)
    {
        tmp = new node;
        tmp->data = x;
        tmp->next = NULL;
        p = start;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = tmp;
        tmp->next = NULL;
    }
    // to insert element at desired position
    int insert_at_pos(int x)
    {
        cout << "\nInsert the position :";
        cin >> pos;
        tmp = new node;
        tmp->data = x;
        tmp->next = NULL;
        p = start;
        while (p != NULL)
        {
            p = p->next;
            count++;
        }
        if (pos == 1)
        {
            start = tmp;
            start->next = NULL;
        }
        else if (pos > 1 && pos < count)
        {
            p = start;
            for (i = 1; i < pos; i++)
            {
                ptr = p;
                p = p->next;
            }

            ptr->next = tmp;
            tmp->next = p;
        }
        else
        {
            cout << "Invalid position";
        }
    }
    void del_first()
    {
        if (start == NULL)
            cout << "List is empty";
        else
        {
            tmp = start;
            start = start->next;
            delete (tmp);
        }
    }
    void del_last()
    {
        if (start == NULL)
            cout << "List is empty";
        else
        {
            p = start;
            while (p->next != NULL)
            {
                ptr = p;
                p = p->next;
            }
            ptr->next = NULL;
            delete (p);
        }
    }
    // function to delete the element at desired position
    void del_at_pos()
    {
        cout << "\nInsert the position at which you want to delete :";
        cin >> pos;
        if (start == NULL)
        {
            cout << "List is empty";
        }

        else
        {
            while (p != NULL)
            {
                p = p->next;
                count++;
            }
            if (pos == 1)
            {
                tmp = start;
                start = start->next;
                delete (tmp);
            }
            else if (pos > 1 && pos < count)
            {
                p = start;
                for (i = 1; i < pos; i++)
                {
                    ptr = p;
                    p = p->next;
                }
                ptr->next = p->next;
                delete (p);
            }
        }
    }

    // function to display the link list
    void display()
    {
        p = start;
        cout << "\nSingly Linked List: \n";
        while (p != NULL)
        {
            cout << p->data << " -> ";
            p = p->next;
        }
    }
};
int main()
{
    singly s;
    int ch, x;
    cout << "\n --------List for operation-------- \n";
    cout << " 1.Insert at beginning \n 2.Insert at end \n 3. Insert at position \n 4.Delete at first \n 5.Delete at position \n 6. Delete at last\n 7.Display" << endl;
    while (ch != 0)
    {
        cout << "\nenter your choice-";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nEnter data to be inserted at the beginning=";
            cin >> x;
            s.insert_at_beg(x);
            break;
        case 2:
            cout << "\nEnter data to be inserted at the end=";
            cin >> x;
            s.insert_at_end(x);
            break;
        case 3:
            cout << "\nEnter data to be inserted at certain position=";
            cin >> x;
            s.insert_at_pos(x);
            break;
        case 4:
            cout<<"Deleted at first position";
            s.del_first();
            break;
        case 5:
            cout << "\nBefore deletion:";
            s.display();
            cout << "\nAfter deletion:";
            s.del_at_pos();
            s.display();
            break;
        case 6:
            cout<<"Deleted at last position";
            s.del_last();
            break;
        case 7:
            s.display();
            break;
        default:
            cout << "Exiting Program!";
            break;
        }
    }
    return 0;
}
