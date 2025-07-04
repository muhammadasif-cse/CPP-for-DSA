#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_position_wise(Node *head, int idx, int val)
{

    Node *newNode = new Node(val);
    Node *tmp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void print_value(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    head->next = a;

    insert_position_wise(head, 0, 30);
    print_value(head);
    return 0;
}