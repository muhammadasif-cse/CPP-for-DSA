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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void delete_at_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void print_value(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    delete_at_head(head);
    print_value(head);

    return 0;
}