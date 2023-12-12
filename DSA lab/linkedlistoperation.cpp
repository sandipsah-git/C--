/*
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; // self referential structure
};
struct node *start;
start = NULL;
void insert_at_beg(int);
void insert_at_end(int);
void insert_at_pos(int);
void delete_first();
void delete_last();
void delete_nth_node();
void count_nodes();
void display();
int main()
{
    int choice;
    int item;
    printf("-------Linked List Operations -------\n");
    printf("1.Insert first\n2.Insert at given position\n3.Insert at end\n4.Delete first node\n5.Delete last node\n6.Delete nth node\n7.Count_nodes\n8.Display Items\n");

    do
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data to be inserted: ");
            scanf("%d", &item);
            insert_at_beg(item);
            break;
        case 2:
            printf("Enter data to be inserted: ");
            scanf("%d", &item);
            insert_at_pos(item);
            break;
        case 3:
            printf("Enter data to be inserted: ");
            scanf("%d", &item);
            insert_at_end(item);
            break;
        case 4:
            delete_first();
            break;
        case 5:
            delete_last();
            break;
        case 6:
            delete_nth_node();
            break;
        case 7:
            count_nodes();
            break;
        case 8:
            display();
            break;
        case 9:
            printf("Exiting Program........\n");
            exit(0);
            break;
        default:
            printf("Invalid choice!");
        }
    } while (choice < 10);
    return 0;
}
void insert_at_first(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    if (start == NULL)
    {
        newnode->next = NULL;
        start = newnode;
    }
    else
    {
        newnode->next = start;
        start = newnode;
    }
}
void insert_at_last(int x)
{
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    temp = start;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;
}
void inset_at_pos(int x)
{
    int i, pos;
    printf("Enter the position where you want to insert: ");
    scanf("%d", &pos);
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    temp = start;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void delete_first()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("Void deletion\n");
        return;
    }
    else
    {
        temp = start;
        start = start->next;
        free(temp);
    }
}
void delete_last()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("Void deletion\n");
        return;
    }
    else
    {
        temp = start;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
}
void delete_nth_node()
{
    struct node *temp;
    int i, pos;
    printf("Enter the position which you want to delete\n");
    scanf("%d", &pos);
    if (start == NULL)
    {
        printf("Void deletion\n");
        return;
    }
    else
    {
        temp = start;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        temp->next = temp->next->next;
    }
}
void count_nodes()
{
    int count=0;
    struct node *temp;
    temp=start;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("The total nodes=%d",count);
}
void traverse(){
    struct node *temp;
    temp=start;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
*/
#include <iostream>
using namespace std;
class singly
{
public:
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
            tmp1 = start;
            start = tmp;
            start->next = tmp1;
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
        cout << "\n\tInsert the position :";
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

    // function to delete the element at desired position
    void del()
    {
        cout << "\n Insert the position :";
        cin >> pos;
        if (start == NULL)
        {
            cout << "List is empty";
        }

        else
        {
            if (pos == 1)
            {
                tmp = start;
                start = start->next;
                delete (tmp);
            }
            else
            {
                while (p != NULL)
                {
                    count++;
                    p = p->next;
                }
            }
            if (pos > 1 && pos < count)
            {
                p = start;
                for (i = 1; i < pos; i++)
                {
                    ptr = p;
                    p = p->next;
                }

                ptr->next = p->next;
            }
        }
    }

    // function to display the link list
    void display()
    {
        p = start;
        cout << "\n Singly Linked List: \n";
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
    cout << "\nList for operation: \n";
    cout << " 1.Insert at beginning \n 2.Insert at end \n 3.Insert at position \n 4.Delete \n 5.Display \n";
    while (ch != 0)
    {
        cout << "Enter your choice-";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nEnter the value=";
            cin >> x;
            s.insert_at_beg(x);
            s.display();
            break;
        case 2:
            cout << "\nEnter the value=";
            cin >> x;
            s.insert_at_end(x);
            s.display();
            break;
        case 3:
            cout << "\nEnter the value=";
            cin >> x;
            s.insert_at_pos(x);
            s.display();
            break;
        case 4:
            cout << "\nBefore deletion:";
            s.display();
            cout << "\nAfter deletion:";
            s.del();
            s.display();
            break;
        case 5:
            s.display();
            break;

        default:
            cout << "Enter the correct choice..!";
            break;
        }
    }
    return 0;
}